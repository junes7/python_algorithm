#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int r=1,m=1;
    while(m<=n) {
        r++;
        m*=r;
    }
    return r-1;
}