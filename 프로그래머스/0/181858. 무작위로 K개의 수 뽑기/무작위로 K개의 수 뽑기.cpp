#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> r;
    int len;
    for(int i=0;i<arr.size();i++) {
        if(find(r.begin(),r.end(),arr[i])==r.end() and r.size()<k) {
            r.push_back(arr[i]);
        }
    }
    len=k-r.size();
    for(int i=0;i<len;i++)
        r.push_back(-1);
    return r;
}