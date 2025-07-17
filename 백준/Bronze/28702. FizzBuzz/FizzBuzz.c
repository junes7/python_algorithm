#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *n = (char *)malloc(sizeof(char) * 9);
    int rlt = 0;
    bool flag;
    char arr[3][9] = {"Fizz", "Buzz", "FizzBuzz"};
    for (int i = 3; i >= 0; i--) {
        scanf("%s", n);
        flag = true;
        for (int j = 0; j < 3; j++) {
            if (strcmp("Fizz", n) != 0 && strcmp("Buzz", n) != 0 && strcmp("FizzBuzz", n) != 0) {
                flag = false;
                break;
            }
        }
        if (!flag) {
            rlt = atoi(n) + i;
            break;
        }
    }
    if (rlt % 3 == 0 && rlt % 5 == 0) {
        printf("%s\n", "FizzBuzz");
    } else {
        if (rlt % 3 == 0)
            printf("%s\n", "Fizz");
        else if (rlt % 5 == 0)
            printf("%s\n", "Buzz");
        else
            printf("%d\n", rlt);
    }
    return 0;
}