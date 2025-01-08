#include <iostream>
using namespace std;

int main(void) {
    int n,a,b;
    cin>>n;
    for(int i=1;i<n+1;i++) {
        cin>>a>>b;
        cout<<"Case #"<<i<<": "<<a+b<<endl;
    }
    return 0;
}