#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string my_string) {
    int r=0;
    for(int i=0;i<my_string.length();i++) {
        if(isdigit(my_string[i])!=0) {
            r+=my_string[i]-48;
        }
    }
    return r;
}