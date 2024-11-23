#include <string>
#include <vector>

using namespace std;

string solution(int q, int r, string code) {
    string ans = "";
    for(int i=0;i<code.length();i++) {
        if(i%q==r) {
            ans+=code[i];
        }
    }
    return ans;
}