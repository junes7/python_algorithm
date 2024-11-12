#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> r;
    for(int i=0;i<intervals.size();i++) {
        for(int j=intervals[i][0];j<intervals[i][1]+1;j++) {
            r.push_back(arr[j]);
        }
    }
    
    
    return r;
}