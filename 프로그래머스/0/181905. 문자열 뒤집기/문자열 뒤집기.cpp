#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) {
    string r = "";
    int t=0;
    for(int i=0;i<my_string.length();i++) {
        // if(i>=s && i<=e) {
        //     r+=my_string[e-t++];
        // } else {
        //     r+=my_string[i];
        // }
        r+=(i>=s & i<=e)?my_string[e-t++]:my_string[i];
    }
    return r;
}