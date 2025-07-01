#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse(char *word) {
    int len = strlen(word);
    char ch;
    for (int i = 0; i < len / 2; i++) {
        ch = word[i];
        word[i] = word[len - 1 - i];
        word[len - 1 - i] = ch;
    }
}
int cmp(const void *pa, const void *pb) {
    const char *a = *(char **)pa;
    const char *b = *(char **)pb;
    return strcmp(a, b);
}
int main(void) {
    char *st, *a, *b, *c, *temp, **words;
    st = (char *)malloc(sizeof(char) * 51);
    a = (char *)malloc(sizeof(char) * 51);
    b = (char *)malloc(sizeof(char) * 51);
    c = (char *)malloc(sizeof(char) * 51);
    temp = (char *)malloc(sizeof(char) * 51);
    scanf("%s", st);
    int idx = 0, l = strlen(st), size;
    size = (l - 1) * (l - 2) / 2;
    words = (char **)malloc(sizeof(char *) * size);
    for (int i = 0; i < size; i++)
        words[i] = (char *)malloc(sizeof(char) * 51);
    for (int i = 1; i < l - 1; i++) {
        for (int j = i + 1; j < l; j++) {
            strncpy(a, st, i);
            strncpy(b, st + i, j - i);
            strncpy(c, st + j, l - j);
            a[i] = '\0';
            b[j - i] = '\0';
            c[l - j] = '\0';
            reverse(a);
            reverse(b);
            reverse(c);
            strcpy(temp, a);
            strcat(temp, b);
            strcat(temp, c);
            strcpy(words[idx++], temp);
        }
    }
    qsort(words, size, sizeof(char *), cmp);
    printf("%s\n", words[0]);
    return 0;
}