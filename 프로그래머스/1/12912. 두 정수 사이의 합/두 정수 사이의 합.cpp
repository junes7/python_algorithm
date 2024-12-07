#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long r=0;
    if(a>b) {
        int t=a;
        a=b;
        b=t;
    }
    for(int i=a;i<b+1;i++) {
        r+=i;
    }
    return r;
}