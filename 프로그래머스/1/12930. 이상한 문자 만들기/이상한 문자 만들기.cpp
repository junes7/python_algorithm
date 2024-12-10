#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int t=0;
    for(int i=0;i<s.length();i++) {
        if(s[i]==' ') {
            t=0;
        } else {
            if(t%2==0)
                s[i]=toupper(s[i]);
            else
                s[i]=tolower(s[i]);
            t++;
        }
    }
    string r=s;
    return r;
}