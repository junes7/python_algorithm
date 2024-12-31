#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int gcd(int x,int y) {
    return x%y==0?y:gcd(y,x%y);
} 

int solution(int n) {
    int r=n/gcd(6,n);
    return r;
}