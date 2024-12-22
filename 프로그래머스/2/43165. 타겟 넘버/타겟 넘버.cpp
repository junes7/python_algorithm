#include <string>
#include <vector>

using namespace std;

int dfs(int i,int total,vector<int> &n,int &t) {
    if(i==n.size())
        return (total==t)?1:0;
    return dfs(i+1,total+n[i],n,t)+dfs(i+1,total-n[i],n,t);
}

int solution(vector<int> numbers, int target) {
    int r=dfs(0,0,numbers,target);
    return r;
}