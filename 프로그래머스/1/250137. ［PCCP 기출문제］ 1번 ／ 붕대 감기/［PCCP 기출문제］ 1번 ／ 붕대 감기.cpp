#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int cnt=0, cur_h=health;
    vector<int> at;
    // 공격 받는 시간 리스트 생성
    for(int i=0;i<attacks.size();i++) {
        at.push_back(attacks[i][0]);
    }
    // 마지막 공격 시간까지 시간 리스트 반복문 돌면서
    for(int i=1;i<attacks[attacks.size()-1][0]+1;i++) {
        if(find(at.begin(),at.end(),i)!=at.end()) {
            cnt=0;
            cur_h-=attacks[find(at.begin(),at.end(),i)-at.begin()][1];
            if(cur_h<=0) {
                cur_h=-1;
                break;
            }
        } else {
            cnt+=1;
            if(cur_h>=health) {
                cur_h=health;
                continue;
            } else {
                if(cnt==bandage[0]) {
                    cnt=0;
                    cur_h+=bandage[1]+bandage[2];
                } else 
                    cur_h+=bandage[1];         
            }                
        }
    }
    return (cur_h<=0)?-1:cur_h;
}