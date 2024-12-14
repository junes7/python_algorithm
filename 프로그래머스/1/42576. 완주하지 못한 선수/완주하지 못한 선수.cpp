#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string r="";
    sort(participant.begin(),participant.end(),less<string>());
    sort(completion.begin(),completion.end(),less<string>());
    for(int i=0;i<completion.size();i++) {
        if(completion[i]!=participant[i]) {
            r+=participant[i];
            break;
        }
    }
    if(r.length()==0) {
        r+=participant[participant.size()-1];
    }
    return r;
}