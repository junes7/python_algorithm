#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    scanf("%d", &n);
    char *st = (char *)malloc(sizeof(char) * 7);
    if (n >= 620)
        st = "Red";
    else if (n >= 590)
        st = "Orange";
    else if (n >= 570)
        st = "Yellow";
    else if (n >= 495)
        st = "Green";
    else if (n >= 450)
        st = "Blue";
    else if (n >= 425)
        st = "Indigo";
    else if (n >= 380)
        st = "Violet";
    printf("%s", st);
    return 0;
}