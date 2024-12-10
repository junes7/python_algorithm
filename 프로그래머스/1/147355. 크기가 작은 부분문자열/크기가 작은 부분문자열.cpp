#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    int r=0,l=p.length();
    for(int i=0;i<t.length()-l+1;i++) {
        if(stoll(t.substr(i,l))<=stoll(p)) {
            r+=1;
        }
    }
    return r;
}