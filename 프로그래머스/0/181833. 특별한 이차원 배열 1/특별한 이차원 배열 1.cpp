#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> r;
    vector<int> arr;
    for(int i=0;i<n;i++) {
        arr={};
        for(int j=0;j<n;j++) {
            arr.push_back((i==j)?1:0);
        }
        r.push_back(arr);
    }
    return r;
}