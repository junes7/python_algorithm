#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void) {
    vector<int> arr(3);
    for(int i=0;i<3;i++)
        cin>>arr[i];
    sort(arr.begin(),arr.end(),less<int>());
    cout<<arr[3/2];
    return 0;
}