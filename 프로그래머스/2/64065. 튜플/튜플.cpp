#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> r;
    vector<vector<int>> n;
    s.replace(0,2,"");
    s.replace(s.size()-2,2,"");
    while(s.find('}')!=string::npos) {
        s.replace(s.find('}'),3," ");
    }
    stringstream ss(s);
    while(getline(ss,s,' ')) {
        stringstream tt(s);
        while(getline(tt,s,',')) {
            r.push_back(stoi(s));
        }
        n.push_back(r);
        r={};
    }
    sort(n.begin(),n.end(),[](const vector<int> a, const vector<int> b) {
        return a.size()<b.size();
    });
    for(int i=0;i<n.size();i++) {
        for(int j=0;j<n[i].size();j++) {
            if(find(r.begin(),r.end(),n[i][j])==r.end()) {
                r.push_back(n[i][j]);
            }
        }
    }
    return r;
}