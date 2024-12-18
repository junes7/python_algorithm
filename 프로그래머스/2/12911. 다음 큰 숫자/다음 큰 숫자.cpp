#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int r=0,cnt,st=0;
    for(int i=7;i>=0;i--) {
            r=(n>>i)&1;
            if(r==1)
                st+=1;
    }
    while(true) {
        cnt=0,n+=1;
        for(int i=7;i>=0;i--) {
            r=(n>>i)&1;
            if(r==1)
                cnt+=1;
        }
        if(cnt==st) {
            r=n;
            break;
        }
    }
    return r;
}