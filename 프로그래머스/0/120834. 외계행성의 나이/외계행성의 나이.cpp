#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string r = "";
    string t=to_string(age);
    for(int i=0;i<t.length();i++) {
        r+=putchar('a'+(t[i]-48));
    }
    return r;
}