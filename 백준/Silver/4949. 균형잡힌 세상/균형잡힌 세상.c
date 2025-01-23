#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int idx;
    char* paren = (char*)malloc(sizeof(char) * 101);
    char* stack = (char*)malloc(sizeof(char) * 101);
    while (1) {
        // scanf("%[^\n]s", paren);
        gets(paren);
        if (strlen(paren) == 1)
            break;
        idx = 0;
        for (int i = 0; i < strlen(paren); i++) {
            if (paren[i] == '(' || paren[i] == '[')
                stack[idx++] = paren[i];
            else if (paren[i] == ')') {
                if (idx > 0 && stack[idx - 1] == '(')
                    idx--;
                else
                    stack[idx++] = paren[i];
            } else if (paren[i] == ']') {
                if (idx > 0 && stack[idx - 1] == '[')
                    idx--;
                else
                    stack[idx++] = paren[i];
            }
        }
        printf("%s\n", idx == 0 ? "yes" : "no");
    }
    return 0;
}