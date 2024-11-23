#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int r=0;
    string t;
    vector<string> pref;
    for(int i=1;i<my_string.length();i++) {
        t="";
        for(int j=0;j<i;j++) {
            t+=my_string[j];
        }
        pref.push_back(t);
    }
    for(int i=0; i<pref.size(); i++) {
        if(pref[i]==is_prefix) {
            r=1;
            break;
        }
    }
    return r;
}