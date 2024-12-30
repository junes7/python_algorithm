#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, string control) {
    int r=n;
    for(int i=0;i<control.length();i++) {
        if(control[i]=='w')
            r+=1;
        else if(control[i]=='s')
            r-=1;
        else if(control[i]=='d')
            r+=10;
        else if(control[i]=='a')
            r-=10;
    }
    return r;
}