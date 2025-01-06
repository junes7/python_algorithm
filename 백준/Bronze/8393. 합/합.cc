#include <iostream>
using namespace std;

int main(void) {
    int n,s=0;
    cin>>n;
    for(int i=1;i<n+1;i++)
        s+=i;
    cout<<s<<endl;
    return 0;
}