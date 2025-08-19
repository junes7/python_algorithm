#include <stdio.h>
#include <stdlib.h>
struct alpha {
    char ch;
    int cnt;
};
int main(void) {
    int n, minn = 1000;
    char *st = (char *)malloc(sizeof(char) * 1001);
    struct alpha dic[10] = {{'B', 0}, {'R', 0}, {'O', 0}, {'N', 0}, {'Z', 0}, {'S', 0}, {'I', 0}, {'L', 0}, {'V', 0}, {'E', 0}};
    scanf("%d %s", &n, st);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 10; j++) {
            if (dic[j].ch == st[i]) {
                dic[j].cnt += 1;
                break;
            }
        }
    }
    dic[9].cnt /= 2, dic[1].cnt /= 2;
    for (int i = 0; i < 10; i++) {
        if (minn > dic[i].cnt) {
            minn = dic[i].cnt;
        }
    }
    printf("%d", minn == 1000 ? 0 : minn);
    return 0;
}