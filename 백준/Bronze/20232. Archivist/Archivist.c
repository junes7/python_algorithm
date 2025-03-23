#include <stdio.h>
int main(void) {
    char arr[25][13] = {"ITMO", "SPbSU", "SPbSU", "ITMO", "ITMO",
                        "SPbSU", "ITMO", "ITMO", "ITMO", "ITMO",
                        "ITMO", "PetrSU, ITMO", "SPbSU", "SPbSU",
                        "ITMO", "ITMO", "ITMO", "ITMO", "SPbSU",
                        "ITMO", "ITMO", "ITMO", "ITMO", "SPbSU", "ITMO"};
    int n;
    scanf("%d", &n);
    printf("%s", arr[n - 1995]);
    return 0;
}