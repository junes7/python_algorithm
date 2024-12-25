#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(string msg) {
    vector<int> r;
    map<string,int> dic;
    string t;
    int cnt,i=0,idx=27;
    for(int i=0;i<26;i++) {
        t=(char)i+65;
        dic[t]=i+1;
    }
    while(i<msg.size()) {
        t="",cnt=0; 
        while(i+cnt<msg.size() and dic.find(t+msg[i+cnt])!=dic.end()) {    
            t+=msg[i+cnt++];
        }
        r.push_back(dic[t]);
        if(i+cnt<msg.size()) {
            dic[t+msg[i+cnt]]=idx++;
        }
        i+=cnt;
    }
    return r;
}