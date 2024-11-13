#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> r;
    int l=my_str.length();
    int len=(l%n==0)?l/n:(l/n+1);
    for(int i=0;i<len;i++) {
        r.push_back(my_str.substr(n*i,n));
    }
    return r;
}