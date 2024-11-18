#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int r = 0;
    for(int i=0;i<myString.length();i++) {
        myString[i]=tolower(myString[i]);
    }
    for(int i=0;i<pat.length();i++) {
        pat[i]=tolower(pat[i]);
    }
    r=(myString.find(pat)!=-1)?1:0;
    return r;
}