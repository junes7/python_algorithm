#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    string r ="";
    for(int i=0;i<rny_string.length();i++) {
        if(rny_string[i]=='m')
            r+="rn";
        else
            r+=rny_string[i];
    }
    return r;
}