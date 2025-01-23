#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void *pa, const void *pb) {
    const char *a = *(char **)pa;
    const char *b = *(char **)pb;
    size_t fa = strlen((const char *)a);
    size_t fb = strlen((const char *)b);
    if (fa == fb) return strcmp(a, b);
    return (fa > fb) - (fa < fb);
}
int main(void) {
    int n, idx = 0;
    bool flag;
    char **words = (char **)malloc(sizeof(char *) * 20000);
    char *ch = (char *)malloc(sizeof(char) * 51);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        flag = true;
        scanf("%s", ch);
        for (int j = 0; j < idx; j++) {
            if (strcmp(words[j], ch) == 0) {
                flag = false;
                break;
            }
        }
        if (flag) {
            words[idx] = (char *)malloc(sizeof(char) * 51);
            strcpy(words[idx++], ch);
        }
    }
    qsort(words, idx, sizeof(char *), compare);
    for (int i = 0; i < idx; i++)
        printf("%s\n", words[i]);
    return 0;
}