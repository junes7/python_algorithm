#include <string>
#include <vector>
#include <cctype>
#include <sstream>

using namespace std;

string solution(string s) {
    string r="",t;
    stringstream ss(s);
    while(getline(ss,t,' ')) {
        if(islower(t[0])) {
            t[0]=toupper(t[0]);
        }
        for(int i=1;i<t.size();i++) {
            if(isupper(t[i])) {
                t[i]=tolower(t[i]);
            }
        }
        r+=t+' ';
    }
    if(s[r.length()-1]!=' ')
        r.erase(r.length()-1,1); 
    return r;
}