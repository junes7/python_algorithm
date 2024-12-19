#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int r=0;
    while(a!=b) {
        a=(a%2!=0)?(a+1)/2:a/2;
        b=(b%2!=0)?(b+1)/2:b/2;
        r+=1;
    }
    return r;
}