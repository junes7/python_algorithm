#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int t=0;
    for(int i=0;i<s.length();i++) {
        if(s[i]==' ') {
            t=0;
        } else {
            s[i]=(t++%2==0)?toupper(s[i]):tolower(s[i]);
        }
    }
    string r=s;
    return r;
}