#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int r=0;
    // if(n%2==0) {
    //     for(int i=2;i<n+1;i=i+2) {
    //         r+=pow(i,2);
    //     }
    // } else {
    //     for(int i=1;i<n+1;i=i+2) {
    //         r+=i;
    //     }
    // }
    for(int i=n%2;i<n+1;i+=2)
        r+=n%2==0?pow(i,2):i;
    return r;
}