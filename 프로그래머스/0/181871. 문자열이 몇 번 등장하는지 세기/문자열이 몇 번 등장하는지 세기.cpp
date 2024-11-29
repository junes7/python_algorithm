#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string myString, string pat) {
    int r=0;
    for(int i=0;i<myString.size()-pat.size()+1;i++) {
        if(myString.substr(i,pat.size())==pat) {
            r+=1;
        }
    }
    return r;
}