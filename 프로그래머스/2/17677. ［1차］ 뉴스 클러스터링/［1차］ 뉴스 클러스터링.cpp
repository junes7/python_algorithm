#include <string>
#include <vector>
#include <cctype>
#include <set>
#include <algorithm>

using namespace std;

int solution(string str1, string str2) {
    int r=0,no=0,deno=0;
    vector<string> s1, s2;
    set<string> un;
    string t;
    transform(str1.begin(),str1.end(),str1.begin(),[](auto c) {return tolower(c);});
    transform(str2.begin(),str2.end(),str2.begin(),[](auto c) {return tolower(c);});
    for(int i=0;i<str1.size()-1;i++) {
        t=str1.substr(i,2);
        if(isalpha(t[0])!=0 and isalpha(t[1])!=0) {
            s1.push_back(t);
        }
    }
    for(int i=0;i<str2.size()-1;i++) {
        t=str2.substr(i,2);
        if(isalpha(t[0])!=0 and isalpha(t[1])!=0) {
            s2.push_back(t);
        }
    }
    for(int i=0;i<s1.size();i++) {
        un.insert(s1[i]);
    }
    for(int i=0;i<s2.size();i++) {
        un.insert(s2[i]);
    }
    set<string>::iterator itr;
    for(itr=un.begin();itr!=un.end();itr++) {
        no+=min(count(s1.begin(),s1.end(),*itr),count(s2.begin(),s2.end(),*itr));
        deno+=max(count(s1.begin(),s1.end(),*itr),count(s2.begin(),s2.end(),*itr));
    }
    r=(deno==0)?65536:(double)no/deno*65536;
    return r;
}