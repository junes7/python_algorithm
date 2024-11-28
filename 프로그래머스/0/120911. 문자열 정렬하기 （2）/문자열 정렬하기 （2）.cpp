#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(string my_string) {
    string r = "";
    vector<char> t;
    for(int i=0;i<my_string.length();i++) {
        // if(isupper(my_string[i])) {
        //     t.push_back(tolower(my_string[i]));
        // } else {
        //     t.push_back(my_string[i]);
        // }
        t.push_back(isupper(my_string[i])?tolower(my_string[i]):my_string[i]);
    }
    sort(t.begin(),t.end());
    for(int i=0;i<t.size();i++) {
        r+=t[i];
    } 
    return r;
}