#include <string>
#include <vector>

using namespace std;

int gcd(int x,int y) {
    return (x%y==0)?y:gcd(y,x%y);
}

int solution(int n) {
    // int r=0,i=1;
    // while(true) {
    //     if((6*i)%n==0) {
    //         r=i;
    //         break;   
    //     }
    //     i++;
    // }
    int r=n/gcd(6,n);
    return r;
}