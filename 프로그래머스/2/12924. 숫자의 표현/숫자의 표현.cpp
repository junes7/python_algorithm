#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(int n) {
    int r=1,l=(n%2==0)?n/2+1:n/2+2,sum;
    vector<int> t;
    if(n>2) {
        for(int i=1;i<l;i++) {
            t.push_back(i);
            sum=accumulate(t.begin(),t.end(),0);
            while(sum>n) {
                sum-=t[0];
                t.erase(t.begin()+0);
            }
            if(sum==n)
                r+=1;
        }
    }
    return r;
}