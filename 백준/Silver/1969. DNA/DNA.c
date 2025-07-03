#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, m, idx = 0, idxn, maxn, h_dist = 0, *cnt = (int*)malloc(sizeof(int) * 4);
    scanf("%d %d", &n, &m);
    char dna[4] = {'A', 'C', 'G', 'T'}, *rlt, **dna_list = (char**)malloc(sizeof(char*) * n);
    rlt = (char*)malloc(sizeof(char) * (m + 1));
    memset(rlt, 0, sizeof(char) * (m + 1));
    for (int i = 0; i < n; i++) {
        dna_list[i] = (char*)malloc(sizeof(char) * (m + 1));
        scanf("%s", dna_list[i]);
    }
    for (int j = 0; j < m; j++) {
        memset(cnt, 0, sizeof(int) * 4);
        maxn = 0;
        for (int i = 0; i < n; i++) {
            for (int k = 0; k < 4; k++) {
                if (dna_list[i][j] == dna[k])
                    cnt[k] += 1;
            }
        }
        for (int k = 0; k < 4; k++) {
            if (maxn < cnt[k]) {
                maxn = cnt[k];
                idxn = k;
            }
        }
        rlt[idx++] = dna[idxn];
        for (int i = 0; i < n; i++) {
            if (dna_list[i][j] != dna[idxn])
                h_dist += 1;
        }
    }
    rlt[idx] = '\0';
    printf("%s\n%d", rlt, h_dist);
    return 0;
}