#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> r;
    int s;
    for(int i=0;i<photo.size();i++) {
        s=0;
        for(int j=0;j<photo[i].size();j++) {
            if(find(name.begin(),name.end(),photo[i][j])!=name.end()) {
                s+=yearning[find(name.begin(),name.end(),photo[i][j])-name.begin()];
            }
        }
        r.push_back(s);
    }
    return r;
}