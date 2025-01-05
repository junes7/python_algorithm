#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string r="";
    r=s;
    sort(r.begin(),r.end(),greater<int>());
    // string upper,lower;
    // for(int i=0;i<s.length();i++) {
    //     if(isupper(s[i]))
    //         upper+=s[i];
    //     else
    //         lower+=s[i];
    // }
    // sort(upper.begin(),upper.end(),greater<int>());
    // sort(lower.begin(),lower.end(),greater<int>());
    // r+=lower+upper;
    return r;
}