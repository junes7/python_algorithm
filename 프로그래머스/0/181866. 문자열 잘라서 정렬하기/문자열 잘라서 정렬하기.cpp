#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

vector<string> solution(string myString) {
    vector<string> r;
    stringstream ss(myString);
    string buffer;
    while(getline(ss,buffer,'x')) {
        if(buffer!="")
            r.push_back(buffer);
    }
    sort(r.begin(),r.end());
    return r;
}