#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <set>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> r;
    string id,re;
    // 신고 해시(딕셔너리) 리스트 신고당한 사람:[신고자 집합, 신고자 이메일 처리 횟수(이때는 키 값이 신고자가 된다.)]
    map<string,pair<set<string>,int>> users;
    for(int i=0;i<id_list.size();i++) {
        users[id_list[i]]={{},0};
    }
    map<string,pair<set<string>,int>>::iterator itr;
    for(int i=0;i<report.size();i++) {
        // 신고 리스트 요소를 신고자와 신고당한 이용자로 분리
        istringstream iss(report[i]);
        iss>>id>>re;
        if(users[re].first.find(id)==users[re].first.end()) {
            users[re].first.insert(id);
        }
    }
    for(itr=users.begin();itr!=users.end();itr++) {
        if(itr->second.first.size()>=k) {
            for(auto it:itr->second.first) {
                users[it].second+=1;
            }
        }
    }
    for(int i=0;i<id_list.size();i++) {
        r.push_back(users[id_list[i]].second);
    }
    return r;
}