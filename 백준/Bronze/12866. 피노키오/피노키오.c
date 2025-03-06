#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, r = 1, mod = 1000000007;
    scanf("%d", &n);
    char* st = (char*)malloc(sizeof(char) * (n + 1));
    scanf("%s", st);
    char alpha[4] = {'A', 'C', 'G', 'T'};
    long long alpha_cnt[4] = {0, 0, 0, 0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            if (st[i] == alpha[j]) {
                alpha_cnt[j] += 1;
                break;
            }
        }
    }
    for (int i = 0; i < 4; i++)
        r = r * alpha_cnt[i] % mod;
    printf("%d", r);
    return 0;
}