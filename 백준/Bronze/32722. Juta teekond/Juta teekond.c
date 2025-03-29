#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, m = 1;
    bool flag;
    int arr[3][2] = {{1, 3}, {6, 8}, {2, 5}};
    for (int i = 0; i < 3; i++) {
        scanf("%d", &n);
        flag = false;
        for (int j = 0; j < 2; j++) {
            if (arr[i][j] == n) {
                flag = true;
                break;
            }
        }
        m *= !flag ? 0 : 1;
    }
    printf("%s", m ? "JAH" : "EI");
    return 0;
}