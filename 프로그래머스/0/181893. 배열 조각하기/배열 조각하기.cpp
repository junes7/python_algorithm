#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> r;
    for(int i=0;i<query.size();i++) {
        if(i%2==0) {
            arr.erase(arr.begin()+query[i]+1,arr.end());
        } else {
            arr.erase(arr.begin(),arr.begin()+query[i]);
        }
    }
    r=arr;
    return r;
}