#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int r=1,s=section[0];
    for(int i=0;i<section.size();i++) {
        if(s+m-1<section[i]) {
            s=section[i];
            r+=1;
        }
    }
    return r;
}