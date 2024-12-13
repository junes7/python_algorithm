#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int r=0,eq,neq;
    char c;
    while(s!="") {
        c=s[0],eq=1,neq=0;
        for(int i=1;i<s.length();i++) {
            if(c==s[i]) {
                eq+=1;
            } else {
                if(neq<eq)
                    neq+=1;
                if(neq==eq)
                    break;
            }  
        }
        r+=1;
        s=s.substr(eq+neq,s.size()-(eq+neq));
    }
    return r;
}