#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> r;
    for(int i=0;i<arr.size();i++) {
        if(arr[i]%divisor==0)
            r.push_back(arr[i]);
    }
    sort(r.begin(),r.end(),less<int>());
    if(r.size()==0)
        r.push_back(-1);
    return r;
}