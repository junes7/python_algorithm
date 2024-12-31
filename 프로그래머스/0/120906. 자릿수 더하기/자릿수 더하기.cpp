#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int r=0;
    while(n>0) {
        r+=n%10;
        n/=10;
    }
    return r;
}