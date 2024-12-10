#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(string s) {
    bool r=true;
    if(s.length()==4 || s.length()==6) {
        for(int i=0;i<s.length();i++) {
            if(isdigit(s[i])!=1) {
                r=false;
                break;
            }
        }
    } else {
        r=false;
    }
    return r;
}