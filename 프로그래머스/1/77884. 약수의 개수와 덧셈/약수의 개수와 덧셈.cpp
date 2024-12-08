#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int r=0,t;
    for(int n=left;n<right+1;n++) {
        t=0;
        for(int i=1;i<n+1;i++) {
            if(n%i==0)
                t+=1;
        }
        r+=(t%2==0)?n:-n;
    }
    return r;
}