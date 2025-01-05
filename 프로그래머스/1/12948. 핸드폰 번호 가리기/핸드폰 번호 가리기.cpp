#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string phone_number) {
    string r="";
    int len=phone_number.length();
    for(int i=0;i<len;i++) {
        r+=i<len-4?'*':phone_number[i];
    }
    return r;
}