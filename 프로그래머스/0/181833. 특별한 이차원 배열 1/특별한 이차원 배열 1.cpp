#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> r;
    for(int i=0;i<n;i++) {
        vector<int> arr;
        for(int j=0;j<n;j++) {
            // if(i==j)
            //     arr.push_back(1);
            // else
            //     arr.push_back(0);
            arr.push_back((i==j)?1:0);
        }
        r.push_back(arr);
    }
    return r;
}