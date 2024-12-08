#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool r = true;
    int cntp=0, cnty=0;
    for(int i=0;i<s.length();i++) {
        if(isupper(s[i]))
            s[i]=tolower(s[i]);
        if(s[i]=='p')
            cntp+=1;
        else if(s[i]=='y')
            cnty+=1;
    }
    r=(cntp==cnty)?true:false;
    return r;
}