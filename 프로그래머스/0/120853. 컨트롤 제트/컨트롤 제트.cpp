#include <string>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

int solution(string s) {
    int r=0;
    stringstream ss(s);
    string buffer;
    vector<string> num;
    while(getline(ss,buffer,' ')) {
        num.push_back(buffer);
    }
    for(int i=0;i<num.size();i++) {
        if(num[i]=="Z")
            r-=stoi(num[i-1]);
        else
            r+=stoi(num[i]);
    }
    return r;
}