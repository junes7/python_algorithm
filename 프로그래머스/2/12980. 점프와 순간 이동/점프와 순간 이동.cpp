#include <iostream>
using namespace std;

int solution(int n)
{
    int r=0;
    while(n>0) {
        // teleport 순간이동   
        if(n%2==0)
            n/=2;
        // jump 점프
        else {
            n-=1;
            r+=1;
        }
    }
    return r;
}