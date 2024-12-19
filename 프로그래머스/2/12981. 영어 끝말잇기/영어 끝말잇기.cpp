#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> r;
    vector<string> used;
    for(int i=0;i<words.size();i++) {
        if(used.size()==0)
            used.push_back(words[i]);
        else {
            if(find(used.begin(),used.end(),words[i])==used.end()) {
                if(used[used.size()-1][used.back().size()-1]==words[i][0]) {
                    used.push_back(words[i]);
                } else {
                    r={i%n+1,i/n+1};
                    break;
                }
            } else {
                r={i%n+1,i/n+1};
                break;
            }
        }
    }
    if(r.size()==0)
        r={0,0};
    return r;
}