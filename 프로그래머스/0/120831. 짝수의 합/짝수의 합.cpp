#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int r=0;
    for(int i=2;i<n+1;i=i+2) {
        r+=i;
    }
    return r;
}