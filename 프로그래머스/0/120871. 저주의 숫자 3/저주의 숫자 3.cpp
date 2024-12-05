#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int r=0;
    for(int i=1;i<n+1;i++) {
        r+=1;
        while(r%3==0 or to_string(r).find("3")!=string::npos)
            r+=1;
    }
    return r;
}