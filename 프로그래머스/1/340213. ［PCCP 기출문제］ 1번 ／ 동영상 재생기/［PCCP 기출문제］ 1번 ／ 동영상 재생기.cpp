#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string r="", time;
    vector<string> vop={video_len,pos,op_start,op_end};
    vector<int> sec;
    vector<int> t;
    
    for(int i=0;i<vop.size();i++) {
        stringstream sv(vop[i]);
        t={};
        while(getline(sv,time,':')){
            t.push_back(stoi(time));
        }
        sec.push_back(60*t[0]+t[1]);
    }
    
    for(int i=0;i<commands.size();i++) {
        if(sec[1]>=sec[2]&&sec[1]<=sec[3])
            sec[1]=sec[3];
        if(commands[i]=="prev") {
            sec[1]=(sec[1]<=10)?0:sec[1]-10;
        } else if(commands[i]=="next") {
            sec[1]=(sec[1]+10>=sec[0])?sec[0]:sec[1]+10;
        }
        if(sec[1]>=sec[2]&&sec[1]<=sec[3])
            sec[1]=sec[3];
    }
    time=to_string(sec[1]/60);
    if(time.length()<2) {
        r+="0";
    }
    r+=time+":";
    time=to_string(sec[1]%60);
    r+=(time.length()<2)?"0"+time:time;
    return r;
}