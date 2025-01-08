#include <iostream>
using namespace std;

int main(void) {
    int total,n,a,b,s=0;
    cin>>total;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a>>b;
        s+=a*b;
    }
    if(s==total)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}