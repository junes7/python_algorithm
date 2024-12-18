#include <string>
#include <vector>

using namespace std;

bool solution(string s)
{
    bool r=true;
    vector<char> t;
    for(int i=0;i<s.length();i++) {
        if(s[i]=='(') {
            t.push_back(s[i]);
        } else { // s[i]==')'
            if(t.size()>0 and t[t.size()-1]=='(')
                t.pop_back();
            else
                t.push_back(s[i]);
        }
    }
    r=t.size()==0?true:false;
    return r;
}