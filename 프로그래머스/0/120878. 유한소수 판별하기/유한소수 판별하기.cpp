#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int x,int y) {
    return x%y==0?y:gcd(y,x%y);
}

int solution(int a, int b) {
    int r=1,d,k=2;
    vector<int> p,t={2,5};
    d=b/gcd(a,b);
    while(d>1) {
        if(d%k==0) {
            if(find(p.begin(),p.end(),k)==p.end())
                p.push_back(k);
            d/=k;
        } else {
            k+=1;
        }
    }
    for(int i=0;i<p.size();i++) {
        if(find(t.begin(),t.end(),p[i])==t.end()) {
            r=2;
            break;
        }
    }
    return r;
}