#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> r(52,0);
    for(int i=0;i<my_string.length();i++) {
        if((int)my_string[i]>=97) {
            r[(int)my_string[i]-97+26]+=1;
        } else {
            r[(int)my_string[i]-65]+=1;
        }
    }
    return r;
}