#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> r;
    int l=arr.size();
    // if(l%2==1) {
    //     for(int i=0;i<l;i++) {
    //         if(i%2==0) {
    //             arr[i]+=n;
    //         }
    //     }
    // } else {
    //     for(int i=0;i<l;i++) {
    //         if(i%2==1) {
    //             arr[i]+=n;
    //         }
    //     }
    // }
    for(int i=(l+1)%2;i<l;i+=2)
        arr[i]+=n;
    r=arr;
    return r;
}