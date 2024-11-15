#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string myString, string pat) {
    int r=0;
    for(int i=0;i<myString.length();i++) {
        myString[i]=(myString[i]=='A')?'B':'A';
    }
    r=(myString.find(pat)!=-1)?1:0;
    return r;
}