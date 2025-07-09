#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void) {
    int n,rlt=-1;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr.begin(),arr.end(),greater<int>());
    for(int i=0;i<n-2;i++) {
        if(arr[i]<arr[i+1]+arr[i+2]) {
            rlt=arr[i]+arr[i+1]+arr[i+2];
            break;
        }
    }
    cout<<rlt;
    return 0;
}