#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> r;
    vector<int> t;
    for(int i=0;i<commands.size();i++) {
        t={};
        for(int j=commands[i][0]-1;j<commands[i][1];j++) {
            t.push_back(array[j]);
        }
        sort(t.begin(),t.end(),less<int>());
        r.push_back(t[commands[i][2]-1]);
    }
    return r;
}