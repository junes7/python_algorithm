#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string s) {
    vector<int> r;
    map<char,int> m;
    for(int i=0;i<s.length();i++) {
        r.push_back((m[s[i]]==0)?-1:(i+1)-m[s[i]]); 
        m[s[i]]=i+1;
    }
    return r;
}