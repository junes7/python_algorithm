#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price) {
    int r=price>=500000?0.8*price:price>=300000?0.9*price:price>=100000?0.95*price:price;
    return r;
}