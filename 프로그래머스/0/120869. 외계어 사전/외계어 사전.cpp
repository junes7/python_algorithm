#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int r=2, flag;
    for(int i=0;i<dic.size();i++) {
        flag=1;
        for(int j=0;j<spell.size();j++) {
            if(dic[i].find(spell[j])==string::npos) {
                flag*=0;
                break;
            }
        }
        if(flag==1)
            r/=2;
    }
    return r;
}