#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    string r="";
    for(int i=0;i<cipher.length();i++) {
        if((i+1)%code==0)
            r+=cipher[i];
    }
    return r;
}