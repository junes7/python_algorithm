#include <string>
#include <vector>
using namespace std;

string solution(string rsp) {
    string r = "";
    for(int i=0; i<rsp.length();i++) {
        if(rsp[i]=='2')
            r+='0';
        else if(rsp[i]=='0')
            r+='5';
        else if(rsp[i]=='5')
            r+='2';
    }
    return r;
}