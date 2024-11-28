#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int num, int k) {
    int r=-1;
    string snum=to_string(num);
    for(int i=0;i<snum.length();i++) {
        if(snum[i]-'0'==k) {
            r=i+1;
            break;
        }
    }
    return r;
}