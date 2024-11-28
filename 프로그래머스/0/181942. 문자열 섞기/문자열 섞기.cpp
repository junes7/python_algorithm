#include <string>
#include <vector>

using namespace std;

string solution(string str1, string str2) {
    string r = "";
    for(int i=0;i<str1.length();i++) {
        r+=str1[i];
        r+=str2[i];
    }
    return r;
}