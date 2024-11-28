#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int r=0,cnt;
    for(int i=4;i<n+1;i++) {
        cnt=0;
        for(int j=1;j<i+1;j++) {
            if(i%j==0)
                cnt++;
        }
        if(cnt>=3)
            r+=1;
    }
    return r;
}