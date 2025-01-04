#include <string>
#include <vector>
#include <numeric>

using namespace std;

double solution(vector<int> arr) {
    double r=0;
    // int s=0;
    // for(int i=0;i<arr.size();i++) {
    //     s+=arr[i];
    // }
    int s=accumulate(arr.begin(),arr.end(),0);
    r=(double)s/arr.size();
    return r;
}