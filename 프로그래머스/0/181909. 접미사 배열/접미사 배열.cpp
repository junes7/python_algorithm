#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(string my_string) {
    vector<string> r;
    int s=my_string.length();
    string t;
    for(int i=0;i<s;i++) {
        t="";
        for(int j=s-i-1;j<s;j++) {
            t+=my_string[j];   
        }
        r.push_back(t);
    }
    sort(r.begin(),r.end());
    return r;
}