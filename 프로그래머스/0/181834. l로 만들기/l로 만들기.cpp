#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string myString) {
    string r = "";
    for(int i=0;i<myString.length();i++) {
        // if(myString[i]<'l')
        //     r+='l';
        // else
        //     r+=myString[i];
        r+=(myString[i]<'l')?'l':myString[i];
    }
    return r;
}