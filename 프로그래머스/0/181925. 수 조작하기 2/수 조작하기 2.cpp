#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string r="";
    for(int i=1;i<numLog.size();i++) {
        if(numLog[i]-numLog[i-1]==1)
            r+='w';
        else if(numLog[i]-numLog[i-1]==-1)
            r+='s';
        else if(numLog[i]-numLog[i-1]==10)
            r+='d';
        else
            r+='a';
    }
    return r;
}