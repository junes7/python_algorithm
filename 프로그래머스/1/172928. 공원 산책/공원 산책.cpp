#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    // 좌표 변수 선언
    int x=0,y=0,m,dx,dy;
    char c;
    bool obs;
    // 방향 해시 코드
    map<char,vector<int>> d={{'E',{0,1}},{'S',{1,0}},{'W',{0,-1}},{'N',{-1,0}}};
    // 시작 좌표 찾기
    for(int i=0;i<park.size();i++) {
        if(park[i].find("S")!=string::npos) {
            x=i;
            y=park[i].find("S");
            break;
        }
    }
    // 수행 명령 리스트 돌면서
    for(int i=0;i<routes.size();i++) {
        // 문자열 공백 기준으로 분리해 문자 유형에 맞게 삽입
        istringstream iss(routes[i]);
        iss>>c>>m;
        // 벗어난 범위 또는 장애물 플래그 변수 선언
        obs=false;
        dx=d[c][0]*m;
        dy=d[c][1]*m;
        // 범위를 벗어났을 때
        if(x+dx<0 or x+dx>=park.size() or y+dy<0 or y+dy>=park[0].size())
            obs=true;
        // 범위를 벗어나지 않았을 때
        else {
            // 명령의 방향이 남쪽 또는 북쪽일 때
            if(c=='S' or c=='N') {
                // 명령 방향 이동하면서 장애물 찾기
                if(d[c][0]>0) {
                    for(int k=x;k<x+dx+d[c][0];k+=d[c][0]) {
                        if(park[k][y]=='X') {
                            obs=true;
                            break;
                        }
                    }
                } else {
                    for(int k=x;k>x+dx+d[c][0];k+=d[c][0]) {
                        if(park[k][y]=='X') {
                            obs=true;
                            break;
                        }
                    }
                }
                // 장애물이 없으면 값 추가
                if(obs==false)
                    x+=dx;
            }
            // 명령의 방향이 동쪽 또는 서쪽일 때
            else {
                // 명령 방향 이동하면서 장애물 찾기
                if(d[c][1]>0) {
                    for(int k=y;k<y+dy+d[c][1];k+=d[c][1]) {
                        if(park[x][k]=='X') {
                            obs=true;
                            break;
                        }
                    }
                } else {
                    for(int k=y;k>y+dy+d[c][1];k+=d[c][1]) {
                        if(park[x][k]=='X') {
                            obs=true;
                            break;
                        }
                    }
                }
                // 장애물이 없으면 값 추가
                if(obs==false)
                    y+=dy;
            }
        }
    }
    vector<int> r={x,y};
    return r;
}