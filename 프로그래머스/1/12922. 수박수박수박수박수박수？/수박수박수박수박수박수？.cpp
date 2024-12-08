#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string r="";
    for(int i=0;i<n;i++) {
        r+=(i%2==0)?"수":"박";
    }
    return r;
}