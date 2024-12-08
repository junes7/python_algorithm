#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int r=0;
    long long n=num;
    for(int i=0;i<500;i++) {
        if(n==1)
            break;
        else {
            n=(n%2==0)?n/2:(n*3+1);
            r+=1;
        }
    }
    if(r>=500)
        r=-1;
    return r;
}