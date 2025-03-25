#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, k, bullets = 0, save = 0;
    char *cmd = (char *)malloc(sizeof(char) * 6);
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%s", cmd);
        if (strcmp(cmd, "ammo") == 0) {
            bullets += k;
        } else if (strcmp(cmd, "save") == 0) {
            save = bullets;
        } else if (strcmp(cmd, "shoot") == 0) {
            bullets -= 1;
        } else if (strcmp(cmd, "load") == 0) {
            bullets = save;
        }
        printf("%d\n", bullets);
    }
    return 0;
}