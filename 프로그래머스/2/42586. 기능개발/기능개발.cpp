#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> r;
    map<int,int> t;
    int d=0,th=0;
    for(int i=0;i<speeds.size();i++) {
        if((double)(100-progresses[i])/speeds[i]>(int)(100-progresses[i])/speeds[i])
            d=(int)(100-progresses[i])/speeds[i]+1;
        else
            d=(int)(100-progresses[i])/speeds[i];
        if(th<d) {
            th=d;
            t[th]=1;
        } else
            t[th]+=1;
    }
    map<int,int>::iterator itr;
    for(itr=t.begin();itr!=t.end();itr++) {
        r.push_back(itr->second);
    }
    return r;
}