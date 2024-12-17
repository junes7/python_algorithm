#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string r="";
    stringstream ss(s);
    vector<int> n;
    while(getline(ss,r,' ')) {
        n.push_back(stoi(r));
    }
    r=to_string(*min_element(n.begin(),n.end()))+' ';
    r+=to_string(*max_element(n.begin(),n.end()));
    return r;
}