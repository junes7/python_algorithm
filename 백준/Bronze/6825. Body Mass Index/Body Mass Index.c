#include <stdio.h>
int main(void) {
    double weight, height, bmi;
    scanf("%lf", &weight);
    scanf("%lf", &height);
    bmi = weight / (height * height);
    if (bmi < 18.5)
        printf("Underweight");
    else if (18.5 <= bmi && bmi <= 25)
        printf("Normal weight");
    else
        printf("Overweight");
    return 0;
}