#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>

using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    int r=0,l=friends.size();
    map<string,vector<int>> gf;
    vector<int> score;
    vector<vector<int>> give;
    string gv,rc;
    // 친구 별 받을 선물의 수
    // 반복문 사용해 선물 주고받은 횟수 2차원 배열 생성
    for(int i=0;i<l;i++) {
        for(int j=0;j<l;j++)
            score.push_back(0);
        give.push_back(score);
    }
    // "초기값 설정 및 선물 지수 도출"
    // 딕셔너리 초기값 생성 | f는 키, 값은 배열 [준 선물, 받은 선물, 선물 지수]
    for(int i=0;i<friends.size();i++) {
        gf[friends[i]]={0,0,0};
    }
    // 주고 받은 선물 기록 리스트를 돌면서
    for(int i=0;i<gifts.size();i++) {
        // g(give)는 준 친구 이름, r(receive)은 받은 친구 이름
        istringstream iss(gifts[i]);
        iss>>gv>>rc;
        // map을 이용해 배열 속 해당 요소 증가
        gf[gv][0]+=1;
        gf[rc][1]+=1;
        give[find(friends.begin(),friends.end(),gv)-friends.begin()][find(friends.begin(),friends.end(),rc)-friends.begin()]+=1;
    }
    for(int i=0;i<friends.size();i++) {
        gf[friends[i]][2]=gf[friends[i]][0]-gf[friends[i]][1];
    }
    for(int i=0;i<l;i++) {
        for(int j=i+1;j<l;j++) {
            if(give[i][j]!=give[j][i]) {
                score[give[i][j]>give[j][i]?i:j]+=1;
            } else {
                if(gf[friends[i]][2]!=gf[friends[j]][2])
                    score[gf[friends[i]][2]>gf[friends[j]][2]?i:j]+=1;
            }
        }
    }
    r=*max_element(score.begin(),score.end());
    return r;
}