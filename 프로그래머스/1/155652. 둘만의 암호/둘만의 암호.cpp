#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    for(int i=0;i<s.length();i++) {
        for(int j=0;j<index;j++) {
            s[i]=(s[i]-97+1)%26+97;
            while(skip.find(s[i])!=string::npos)
                s[i]=(s[i]-97+1)%26+97;
        }
    }
    return s;
}