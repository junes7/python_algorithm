#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, idx;
    char *paren = (char *)malloc(sizeof(char) * 50);
    scanf("%d", &n);
    char *stack = (char *)malloc(sizeof(char) * n);
    for (int i = 0; i < n; i++) {
        scanf("%s", paren);
        idx = 0;
        for (int j = 0; j < strlen(paren); j++) {
            if (paren[j] == '(') {
                stack[idx++] = paren[j];
            } else {
                if (stack[idx - 1] == '(')
                    idx--;
                else
                    stack[idx++] = paren[j];
            }
        }
        printf("%s\n", idx == 0 ? "YES" : "NO");
    }
    return 0;
}