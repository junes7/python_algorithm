#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string my_string, string alp) {
    string r = "";
    for(int i=0;i<my_string.length();i++) {
        if(my_string[i]==alp[0])
            r.push_back(toupper(my_string[i]));
        else
            r.push_back(my_string[i]);
    }
    return r;
}