#include <stdio.h>
int main(void) {
    char alpha;
    scanf("%c", &alpha);
    printf("%s", alpha == 'N' || alpha == 'n' ? "Naver D2" : "Naver Whale");
    return 0;
}