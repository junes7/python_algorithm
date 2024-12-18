#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int r=0,a=0,b=1;
    for(int i=2;i<n+1;i++) {
        r=a;
        a=b;
        b=(r+b)%1234567;
    }
    return b;
}