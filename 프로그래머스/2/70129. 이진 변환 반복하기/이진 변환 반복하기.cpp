#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> r;
    int cnt=0,zcnt=0,n=0;
    while(s.size()>1) {
        cnt+=1;
        zcnt+=count(s.begin(),s.end(),'0');
        while(s.find('0')!=string::npos) {
            s.replace(s.find("0"),1,"");
        }
        n=s.size();
        s="";
        while(n>0) {
            s+=to_string(n%2);
            n/=2;
        }
    }
    r={cnt,zcnt};
    return r;
}