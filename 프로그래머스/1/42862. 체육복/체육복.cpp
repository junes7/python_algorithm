#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int r=0;
    sort(reserve.begin(),reserve.end(),less<int>());
    map<int,int> gymcl;
    for(int i=1;i<n+1;i++) {
        if(find(reserve.begin(),reserve.end(),i)!=reserve.end()) {
            gymcl[i]=find(lost.begin(),lost.end(),i)==lost.end()?2:1;
        } else {
            gymcl[i]=find(lost.begin(),lost.end(),i)==lost.end()?1:0;
        }
    }
    for(int i=0;i<reserve.size();i++) {
        if(find(lost.begin(),lost.end(),reserve[i])!=lost.end()) {
            continue;
        } else {
            if(find(lost.begin(),lost.end(),reserve[i]-1)!=lost.end()) {
                if(gymcl[reserve[i]-1]<1 and gymcl[reserve[i]]>1) {
                    gymcl[reserve[i]-1]+=1;
                    gymcl[reserve[i]]-=1;
                }
            }
            if(find(lost.begin(),lost.end(),reserve[i]+1)!=lost.end()) {
                if(gymcl[reserve[i]+1]<1 and gymcl[reserve[i]]>1) {
                    gymcl[reserve[i]+1]+=1;
                    gymcl[reserve[i]]-=1;
                }
            }
        }
    }
    map<int,int>::iterator itr;
    for(itr=gymcl.begin();itr!=gymcl.end();itr++) {
        if(itr->second>0)
            r+=1;
    }
    return r;
}