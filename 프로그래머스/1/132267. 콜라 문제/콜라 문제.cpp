#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int r=0;
    while(n/a>0) {
        r+=n/a*b;
        n=(n/a*b)+n%a;
    }
    return r;
}