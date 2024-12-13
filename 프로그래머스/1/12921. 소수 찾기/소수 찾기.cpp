#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int r=0;
    vector<bool> ispr={false,false};
    for(int i=2;i<n+1;i++) {
        ispr.push_back(true);
    }
    for(int i=2;i<pow(n,0.5)+1;i++) {
        if(ispr[i]) {
            for(int j=pow(i,2);j<n+1;j=j+i) {
                ispr[j]=false;
            }
        }
    }
    for(int i=0;i<ispr.size();i++) {
        if(ispr[i])
            r+=1;
    }
    return r;
}