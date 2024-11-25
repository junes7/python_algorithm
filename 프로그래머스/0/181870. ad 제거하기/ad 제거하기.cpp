#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> r;
    for(int i=0;i<strArr.size();i++) {
        if(strArr[i].find("ad")==-1)
            r.push_back(strArr[i]);
    }
    return r;
}