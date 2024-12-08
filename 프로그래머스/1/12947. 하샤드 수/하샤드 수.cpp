#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    string t=to_string(x);
    int s=0;
    for(int i=0;i<t.size();i++) {
        s+=t[i]-48;
    }
    bool r=(x%s==0)?true:false;
    return r;
}