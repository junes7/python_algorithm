#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string my_string, int m, int c) {
    string r = "";
    for(int i=0;i<my_string.length()/m;i++) {
        r+=my_string[c-1+m*i];
    }
    return r;
}