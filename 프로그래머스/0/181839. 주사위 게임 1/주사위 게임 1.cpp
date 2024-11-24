#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int a, int b) {
    int r = 0;
    if(a%2==1 && b%2==1)
        r=pow(a,2)+pow(b,2);
    else if(a%2==1 || b%2==1)
        r=2*(a+b);
    else
        r=abs(a-b);
    return r;
}