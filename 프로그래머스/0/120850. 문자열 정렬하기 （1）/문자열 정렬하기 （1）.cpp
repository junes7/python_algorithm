#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(string my_string) {
    vector<int> r;
    for(int i=0;i<my_string.length();i++) {
        if(isalpha(my_string[i])==0)
            r.push_back(my_string[i]-48);
    }
    sort(r.begin(),r.end());
    return r;
}