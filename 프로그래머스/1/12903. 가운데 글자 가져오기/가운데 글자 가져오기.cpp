#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string r="";
    int med=s.size()/2;
    // if(s.size()%2!=0) {
    //     r+=s[med];
    // } else {
    //     r+=s[med-1];
    //     r+=s[med];
    // }
    if(s.size()%2==0)
        r+=s[med-1];
    r+=s[med];
    return r;
}