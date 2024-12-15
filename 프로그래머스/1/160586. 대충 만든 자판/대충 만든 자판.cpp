#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> r,t;
    int s;
    for(int i=0;i<targets.size();i++) {
        s=0;
        for(int j=0;j<targets[i].size();j++) {
            t={};
            for(int k=0;k<keymap.size();k++) {
                if(keymap[k].find(targets[i][j])!=string::npos) {
                    t.push_back(keymap[k].find(targets[i][j])+1);
                }
            }
            if(t.size()==0) {
                s=0;
                break;
            } else {
                s+=*min_element(t.begin(),t.end());
            }
        }
        r.push_back((s==0)?-1:s);
    }
    return r;
}