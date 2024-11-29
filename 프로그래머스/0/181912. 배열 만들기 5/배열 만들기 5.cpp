#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> r;
    for(int i=0;i<intStrs.size();i++) {
        if(stoi(intStrs[i].substr(s,l))>k) {
            r.push_back(stoi(intStrs[i].substr(s,l))); 
        }
    }
    return r;
}