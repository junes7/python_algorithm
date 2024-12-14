#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> r;
    map<string,int> th={{"code",0},{"date",1},{"maximum",2},{"remain",3}};
    for(int i=0;i<data.size();i++) {
        if(data[i][th[ext]] < val_ext) {
            r.push_back(data[i]);
        }
    }
    sort(r.begin(),r.end(),[&th,&sort_by](vector<int> &v1, vector<int> &v2) {
        return v1[th[sort_by]]<v2[th[sort_by]];
    });
    return r;
}