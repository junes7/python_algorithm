#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> r;
    string t;
    for(int i=0; i<strArr.size(); i++) {
        if(i%2==0)
            for(int j=0;j<strArr[i].length();j++) {
                t+=tolower(strArr[i][j]);
            }
        else
            for(int j=0;j<strArr[i].length();j++) {
                t+=toupper(strArr[i][j]);
            }
        r.push_back(t);
        t="";
    }
    return r;
}