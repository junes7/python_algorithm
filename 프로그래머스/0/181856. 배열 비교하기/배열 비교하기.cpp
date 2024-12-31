#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int r=0,s1=0,s2=0;
    if(arr1.size()!=arr2.size()) {
        r=(arr1.size()>arr2.size())?1:-1;
    } else {
        // method1 for loop
        // for(int i=0;i<arr1.size();i++) {
        //     s1+=arr1[i];
        //     s2+=arr2[i];
        // }
        // method2 accumulate function
        s1=accumulate(arr1.begin(),arr1.end(),0);
        s2=accumulate(arr2.begin(),arr2.end(),0);
        r=(s1==s2)?0:(s1>s2)?1:-1;
    }
    return r;
}