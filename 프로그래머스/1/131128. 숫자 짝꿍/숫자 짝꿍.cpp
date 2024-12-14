#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

string solution(string X, string Y) {
    string r="";
    int num;
    map<char,int> xcnt;
    for(char c: X) xcnt[c]++;
    map<char,int> ycnt;
    for(char c: Y) ycnt[c]++;
    for(int i=9;i>=0;i--) {
        num=min(xcnt[i+'0'],ycnt[i+'0']);
        for(int j=0;j<num;j++) r+=i+'0';
    }
    if(r.length()==0)
        r+="-1";
    else if(r[0]=='0' and r.size()>1)
        r="0";
    return r;
}