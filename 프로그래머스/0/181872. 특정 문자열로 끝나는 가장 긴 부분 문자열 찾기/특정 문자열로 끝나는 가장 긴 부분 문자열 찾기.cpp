#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string myString, string pat) {
    string r = "";
    for(int i=myString.size()-1;i>=0;i--) {
        if(myString[i]==pat[pat.size()-1]) {
            r=myString.substr(0,i+1);
            break;
        }
    }
    return r;
}