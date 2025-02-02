#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
void add_dna(char *chk_dna, int *cnt_dna, char d) {
    for (int i = 0; i < 4; i++) {
        if (d == chk_dna[i])
            cnt_dna[i] += 1;
    }
}
bool check_dna(int *cnt_dna, int *max_dna) {
    for (int i = 0; i < 4; i++) {
        if (cnt_dna[i] < max_dna[i])
            return false;
    }
    return true;
}
void del_dna(char *chk_dna, int *cnt_dna, char d) {
    for (int i = 0; i < 4; i++) {
        if (d == chk_dna[i])
            cnt_dna[i] -= 1;
    }
}
int main(void) {
    int s, p, cnt, cnt_dna[4] = {0, 0, 0, 0}, max_dna[4];
    scanf("%d %d", &s, &p);
    char chk_dna[4] = {'A', 'C', 'G', 'T'}, *dna = (char *)malloc(sizeof(char) * s);
    scanf("%s", dna);
    for (int i = 0; i < 4; i++)
        scanf("%d", &max_dna[i]);
    for (int i = 0; i < p; i++) {
        add_dna(chk_dna, cnt_dna, dna[i]);
        cnt = check_dna(cnt_dna, max_dna) ? 1 : 0;
    }
    for (int i = p; i < s; i++) {
        del_dna(chk_dna, cnt_dna, dna[i - p]);
        add_dna(chk_dna, cnt_dna, dna[i]);
        if (check_dna(cnt_dna, max_dna))
            cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}