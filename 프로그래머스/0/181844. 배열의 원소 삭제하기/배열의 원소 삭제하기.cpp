#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> r;
    for(int i=0;i<arr.size();i++) {
        if(find(delete_list.begin(),delete_list.end(),arr[i])==delete_list.end()) {
            r.push_back(arr[i]);
        }
    }
    return r;
}