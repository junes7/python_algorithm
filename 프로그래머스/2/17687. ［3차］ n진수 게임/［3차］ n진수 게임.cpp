#include <string>
#include <vector>

using namespace std;

string base_n(int num,int n) {
    string s="";
    while(num!=0) {
        s=(num%n<10)?(to_string(num%n)+s):((char)(55+num%n)+s);
        num/=n;
    }
    return s;
}

string solution(int n, int t, int m, int p) {
    string r="",st="0";
    int num=1;
    for(int i=0;i<t*m;i++) {
        st+=base_n(num++,n);
    }
    for(int i=p-1;i<t*m;i+=m) {
        r+=st[i];
    }
    return r;
}