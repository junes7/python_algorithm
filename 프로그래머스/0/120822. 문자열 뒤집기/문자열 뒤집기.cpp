#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string r = "";
    for(int i=my_string.length()-1;i>=0;i--) {
        r+=my_string[i];
    }
    return r;
}