#include <string>
#include <vector>
#include <deque>

using namespace std;

int solution(string s) {
    int r=0;
    deque<char> dq;
    vector<char> t;
    for(int i=0;i<s.size();i++) {
        dq.push_back(s[i]);
    }
    for(int i=0;i<s.size();i++) {
        t={};
        for(int j=0;j<s.size();j++) {
            if(t.size()==0) {
                t.push_back(dq.at(j));
            } else {
                if((t.back()=='[' and dq.at(j)==']') or (t.back()=='(' and dq.at(j)==')') or (t.back()=='{' and dq.at(j)=='}')) {
                    
                    t.erase(t.begin()+t.size()-1);
                } else {
                    t.push_back(dq.at(j));
                }
            }
        }
        if(t.size()==0)
            r+=1;
        dq.pop_front();
        dq.push_back(s[i]);
    }
    return r;
}