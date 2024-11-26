#include <string>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;

vector<int> solution(string myString) {
    vector<int> r;
    stringstream ss(myString);
    string buffer;
    while(getline(ss,buffer,'x')) {
        r.push_back(buffer.length());
    }
    if(myString[myString.length()-1]=='x') {
        r.push_back(0);
    }
    return r;
}