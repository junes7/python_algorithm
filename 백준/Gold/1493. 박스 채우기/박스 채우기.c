#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int compare(const void *pa, const void *pb) {
    const int *a = *(int **)pa;
    const int *b = *(int **)pb;
    return b[0] - a[0];
}
long fill_boxes(int l, int w, int h, int **blocks, int n) {
    long volume = (long)l * w * h, used_volume = 0, total_cnt = 0, size, cnt, max_cnt, use_cnt;
    for (int i = 0; i < n; i++) {
        size = 1 << blocks[i][0];
        cnt = blocks[i][1];
        if (volume <= used_volume) break;
        max_cnt = (l / size) * (w / size) * (h / size);
        max_cnt -= used_volume / pow(size, 3);
        use_cnt = cnt < max_cnt ? cnt : max_cnt;
        used_volume += use_cnt * pow(size, 3);
        total_cnt += use_cnt;
    }
    return used_volume == volume ? total_cnt : -1;
}
int main(void) {
    int l, w, h, n;
    scanf("%d %d %d", &l, &w, &h);
    scanf("%d", &n);
    int **blocks = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++) {
        blocks[i] = (int *)malloc(sizeof(int) * 2);
        for (int j = 0; j < 2; j++)
            scanf("%d", &blocks[i][j]);
    }
    qsort(blocks, n, sizeof(int *), compare);
    printf("%d", fill_boxes(l, w, h, blocks, n));
    return 0;
}