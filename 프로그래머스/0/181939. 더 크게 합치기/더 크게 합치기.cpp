#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    string ch1=to_string(a);
    string ch2=to_string(b);
    string s;
    if(stoi(ch1+ch2) > stoi(ch2+ch1)) {
        s=ch1+ch2;
        
    } else {
        s=ch2+ch1;
    }
    int r=stoi(s);
    
    return r;
}