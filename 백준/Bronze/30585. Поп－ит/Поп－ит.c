#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int r, c, nz = 0, no = 0;
    scanf("%d %d", &r, &c);
    char **arr = (char **)malloc(sizeof(char *) * r);
    for (int i = 0; i < r; i++) {
        arr[i] = (char *)malloc(sizeof(char) * c);
        scanf("%s", arr[i]);
        for (int j = 0; j < c; j++) {
            if (arr[i][j] == '0')
                nz += 1;
            else
                no += 1;
        }
    }
    printf("%d", nz < no ? nz : no);
    return 0;
}