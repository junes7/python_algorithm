#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int r=0;
    for(int i=1;i<n+1;i++) {
        if(n%i==0)
            r+=1;
    }
    return r;
}