#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, d, k, c, sushi, eat_sushi, max_sushi, start, end;
    scanf("%d %d %d %d", &n, &d, &k, &c);
    int *arr = (int *)malloc(sizeof(int) * n);
    int *check = (int *)malloc(sizeof(int) * (d + 1));
    memset(check, 0, sizeof(int) * (d + 1));
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    check[c] = 1;
    eat_sushi = 1;
    for (int i = 0; i < k; i++) {
        sushi = arr[i % n];
        if (!check[sushi])
            eat_sushi += 1;
        check[sushi] += 1;
    }
    max_sushi = eat_sushi;
    for (int i = 0; i < n; i++) {
        start = arr[i % n];
        end = arr[(i + k) % n];
        check[start] -= 1;
        if (!check[start])
            eat_sushi -= 1;
        if (!check[end])
            eat_sushi += 1;
        check[end] += 1;
        max_sushi = max_sushi > eat_sushi ? max_sushi : eat_sushi;
    }
    printf("%d", max_sushi);
    return 0;
}