#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string phone_number) {
    string r="";
    int len=phone_number.length()-4;
    for(int i=0;i<phone_number.length();i++) {
        r+=(i<len)?'*':phone_number[i];
    }
    return r;
}