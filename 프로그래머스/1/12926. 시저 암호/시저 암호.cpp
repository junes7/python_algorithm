#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
    string r="";
    for(int i=0;i<s.length();i++) {
        if(s[i]==' ')
            r+=' ';
        else {
            r+=(isupper(s[i]))?(s[i]-65+n)%26+65:(s[i]-97+n)%26+97;
        }   
    }
    return r;
}