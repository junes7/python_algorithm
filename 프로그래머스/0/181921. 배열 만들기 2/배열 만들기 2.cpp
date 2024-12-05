#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> ans;
    string t;
    bool flag;
    for(int i=l;i<r+1;i++) {
        t=to_string(i);
        flag=true;
        for(int j=0;j<t.length();j++) {
            if(t[j]!='5' && t[j]!='0') {
                    flag=false;
                    break;
            }
        }
        if(flag)
            ans.push_back(i);
    }
    if(ans.size()==0)
        ans.push_back(-1);
    return ans;
}