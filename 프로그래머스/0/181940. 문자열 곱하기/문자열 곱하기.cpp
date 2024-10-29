#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int k) {
    string r="";
    for(int i=0; i<k;i++) {
        r+=my_string;
    }
    return r;
}