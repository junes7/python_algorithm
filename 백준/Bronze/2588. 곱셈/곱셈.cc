#include <iostream>
using namespace std;

int main(void) {
    int x,y,n;
    cin>>x>>y;
    n=y;
    while(n>0) {
        cout<<x*(n%10)<<endl;
        n/=10;
    }
    cout<<x*y<<endl;
    return 0;
}