#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

string solution(string s) {
    string r="";
    map<char,int> dic;
    for(int i=0;i<s.size();i++) {
        // if(dic[s[i]]==0) {
        //     dic[s[i]]=1;
        // } else {
        //     dic[s[i]]++;
        // }
        dic[s[i]]=(dic[s[i]]==0)?1:dic[s[i]]+1;
    }
    for(pair<char,int> i:dic) {
        if(i.second==1)
            r+=i.first;
    }
    return r;
}