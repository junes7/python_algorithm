#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    string t;
    int r=0;
    for(int i=0;i<A.size();i++) {
        if(A==B)
            break;
        t=A[A.size()-1];
        A.erase(A.size()-1,1);
        A=t+A;
        r+=1;
    }
    if(A!=B)
        r=-1;
    return r;
}