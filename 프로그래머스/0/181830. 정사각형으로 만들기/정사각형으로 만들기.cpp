#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> r;
    vector<int> t;
    int l=arr.size(),el=arr[0].size();
    if(l<el) {
        for(int i=0;i<el;i++) {
            t.push_back(0);
        }
        for(int i=0;i<el-l;i++) {
            arr.push_back(t);
        }
    } else if(l>el) {
        for(int i=0;i<l;i++) {
            for(int j=0;j<l-el;j++) {
                arr[i].push_back(0);
            }
        }
    }
    r=arr;
    return r;
}