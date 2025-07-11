#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n,m,wgh=0,cnt=1;
    cin>>n>>m;
    if(n==0) {
        cout<<0;
        return 0;
    }
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=n-1;i>=0;i--) {
        wgh+=arr[i];
        if(wgh>m) {
            wgh=arr[i];
            cnt+=1;
        }
    }
    cout<<cnt;
    return 0;
}