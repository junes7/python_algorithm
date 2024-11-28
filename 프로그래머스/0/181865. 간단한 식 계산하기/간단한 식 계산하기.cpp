#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(string binomial) {
    int r=0;
    stringstream ss(binomial);
    string buffer;
    vector<string> t;
    while(getline(ss,buffer,' ')) {
        t.push_back(buffer);
    }
    if(t[1] == "+")
        r=stoi(t[0])+stoi(t[2]);
    else if(t[1] == "-")
        r=stoi(t[0])-stoi(t[2]);
    else if(t[1] == "*")
        r=stoi(t[0])*stoi(t[2]);
    return r;
}