#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <cctype>
using namespace std;

int solution(string my_string) {
    int r=0;
    for(int i=0;i<my_string.length();i++) {
        if(isdigit(my_string[i])==0) {
            my_string[i]=' ';
        }
    }
    stringstream ss(my_string);
    string buffer;
    while(getline(ss,buffer,' ')) {
        if(isdigit(buffer[0])) {
            r+=stoi(buffer);
        }
    }
    return r;
}