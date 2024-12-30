#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) {
    string r = "";
    for(int i=0;i<str_list.size();i++) {
        if(str_list[i].find(ex)==string::npos) {
            r+=str_list[i];
        }
    }
    return r;
}