#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct time {
    char rec[9];
    char team[2];
};
int cmp(const void *pa, const void *pb) {
    const struct time a = *(struct time *)pa;
    const struct time b = *(struct time *)pb;
    return strcmp(a.rec, b.rec);
}
int main(void) {
    int total_R = 0, total_B = 0;
    struct time *arr = (struct time *)malloc(sizeof(struct time) * 8);
    int point[8] = {10, 8, 6, 5, 4, 3, 2, 1};
    for (int i = 0; i < 8; i++)
        scanf("%s %s", arr[i].rec, arr[i].team);
    qsort(arr, 8, sizeof(struct time), cmp);
    for (int i = 0; i < 8; i++) {
        if (strcmp(arr[i].team, "B") == 0)
            total_B += point[i];
        else
            total_R += point[i];
    }
    printf("%s", total_B < total_R ? "Red" : "Blue");
    return 0;
}