#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string r = "";
    int mode=0;
    for(int i=0;i<code.length();i++) {
        if(code[i]=='1') {
            mode^=1;
        } else {
            if(i%2==mode)
                r+=code[i];
        }
    }
    return (r.length()==0)?"EMPTY":r;
}