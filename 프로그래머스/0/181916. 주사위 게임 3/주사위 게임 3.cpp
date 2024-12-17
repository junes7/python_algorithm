#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;

int solution(int a, int b, int c, int d) {
    int r=0;
    vector<int> dice={a,b,c,d};
    map<int,int,greater<int>> dcnt;
    for(int i=0;i<dice.size();i++) {
        if(dcnt.find(dice[i])==dcnt.end()) {
            dcnt[dice[i]]=count(dice.begin(),dice.end(),dice[i]);
        }
    }
    vector<pair<int,int>> vdcnt(dcnt.begin(),dcnt.end());
    sort(vdcnt.begin(),vdcnt.end(),[](const pair<int,int>& a, const pair<int,int>& b){
        if(a.second==b.second) return a.first<b.first;
        return a.second>b.second;
    });
    for(int i=0;i<1;i++) {
        if(vdcnt[i].second==4) {
            r=1111*vdcnt[i].first;
        } else if(vdcnt[i].second==3) {
            r=pow(10*vdcnt[i].first+vdcnt[i+1].first,2);
        } else if(vdcnt[i].second==2) {
            if(vdcnt[i+1].second==2)
                r=(vdcnt[i].first+vdcnt[i+1].first)*abs(vdcnt[i].first-vdcnt[i+1].first);
            else
                r=vdcnt[i+1].first*vdcnt[i+2].first;   
        } else {
            r=vdcnt[i].first;
        }
    }
    return r;
}