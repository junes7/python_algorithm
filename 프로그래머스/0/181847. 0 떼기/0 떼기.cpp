#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string n_str) {
    string r="";
    // int start=n_str.find_first_not_of('0');
    // for(int i=start;i<n_str.length();i++) {
    //     r+=n_str[i];
    // }
    r=to_string(stoi(n_str));
    return r;
}