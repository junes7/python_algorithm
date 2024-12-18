#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string a, string b) {
    string r="";
    int re=0,ca=0,lendiff=a.size()-b.size();
    if(abs(lendiff)>0) {
        if(lendiff<0)
            lendiff*=-1;
        for(int i=0;i<lendiff;i++)
            r+="0";
        if(a.size()<b.size())
            a=r+a;
        else if(a.size()>b.size())
            b=r+b;
        r="";
    }
    for(int i=a.size()-1;i>=0;i--) {
        if((a[i]-48)+(b[i]-48)+ca>=10) {
            re=((a[i]-48)+(b[i]-48)+ca)%10;
            ca=((a[i]-48)+(b[i]-48)+ca)/10;
            r+=to_string(re);
            if(i==0 and ca>0)
                r+=to_string(ca);
        } else {
            r+=to_string((a[i]-48)+(b[i]-48)+ca);
            ca=0;
        }
    }
    reverse(r.begin(),r.end());
    return r;
}