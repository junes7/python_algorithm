#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string r="";
    for(int i=0;i<n;i++) {
        r+=my_string[i];
    }
    return r;
}