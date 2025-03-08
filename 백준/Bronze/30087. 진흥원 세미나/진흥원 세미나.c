#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n;
    scanf("%d", &n);
    char seminar[7][23] = {"Algorithm", "DataAnalysis", "ArtificialIntelligence", "CyberSecurity", "Network", "Startup", "TestStrategy"};
    char room[7][5] = {"204", "207", "302", "B101", "303", "501", "105"};
    char *st = (char *)malloc(sizeof(char) * 23);
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        for (int j = 0; j < 7; j++) {
            if (strcmp(st, seminar[j]) == 0) {
                printf("%s\n", room[j]);
                break;
            }
        }
    }
    return 0;
}