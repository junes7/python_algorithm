#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string r="";
    for(int i=my_string.length()-n; i<my_string.length(); i++) {
        r+=my_string[i];
    }
    return r;
}