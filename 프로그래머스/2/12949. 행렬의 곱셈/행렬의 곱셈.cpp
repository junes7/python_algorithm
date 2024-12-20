#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> r;
    vector<int> t;
    int s;
    for(int i=0;i<arr1.size();i++) {
        t={};
        for(int k=0;k<arr2[0].size();k++) {
            s=0;
            for(int j=0;j<arr1[i].size();j++) {
                s+=arr1[i][j]*arr2[j][k];
            }
            t.push_back(s);
        }
        r.push_back(t);
    }
    return r;
}