#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n;
    scanf("%d", &n);
    bool flag;
    char *st = (char *)malloc(sizeof(char) * 51);
    char arr[7][38] = {"Never gonna give you up", "Never gonna let you down", "Never gonna run around and desert you", "Never gonna make you cry", "Never gonna say goodbye", "Never gonna tell a lie and hurt you", "Never gonna stop"};
    gets(st);
    for (int i = 0; i < n; i++) {
        gets(st);
        flag = true;
        for (int j = 0; j < 7; j++) {
            if (strcmp(arr[j], st) == 0) {
                flag = false;
                break;
            }
        }
        if (flag) {
            break;
        }
    }
    printf("%s", flag ? "Yes" : "No");
}