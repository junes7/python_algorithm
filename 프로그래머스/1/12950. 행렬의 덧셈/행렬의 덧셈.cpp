#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> r;
    vector<int> t;
    for(int i=0;i<arr1.size();i++) {
        t={};
        for(int j=0;j<arr1[i].size();j++) {
            t.push_back(arr1[i][j]+arr2[i][j]);
        }
        r.push_back(t);
    }
    return r;
}