#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int r=0, s=my_string.length();
    string t;
    vector<string> slist;
    for(int i=0;i<s;i++) {
        t="";
        for(int j=s-i-1;j<s;j++) {
            t+=my_string[j];
        }
        slist.push_back(t);
    }
    for(int i=0;i<slist.size();i++) {
        if(slist[i]==is_suffix)
            r=1;
    }
    return r;
}