#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int r=0;
    for(int i=2;i<n+1;i++) {
        if(i%2==0)
            r+=i;
    }
    return r;
}