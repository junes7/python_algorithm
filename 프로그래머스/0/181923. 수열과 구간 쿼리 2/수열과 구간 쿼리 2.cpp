#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> r;
    int min,max=*max_element(arr.begin(),arr.end());
    for(int i=0;i<queries.size();i++) {
        min=max+1;
        for(int j=queries[i][0];j<queries[i][1]+1;j++) {
            if(arr[j]>queries[i][2] and arr[j]<min) {
                min=arr[j];
            }
        }
        r.push_back((min==max+1)?-1:min);
    }
    return r;
}