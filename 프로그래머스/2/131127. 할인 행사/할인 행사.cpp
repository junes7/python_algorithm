#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int r=0;
    bool flag;
    map<string,int> wish, discnt;
    map<string,int>::iterator itr;
    for(int i=0;i<want.size();i++) {
        wish[want[i]]=number[i];
    }
    for(int i=0;i<discount.size()-10+1;i++) {
        discnt={};
        for(int j=i;j<i+10;j++) {
            if(discnt.find(discount[j])==discnt.end())
                discnt[discount[j]]=1;
            else {
                discnt[discount[j]]+=1;    
            }
        }
        flag=true;
        for(itr=discnt.begin();itr!=discnt.end();itr++) {
            if(wish[itr->first]!=discnt[itr->first]) {
                flag=false;
                break;
            }
        }
        if(flag)
            r+=1;
    }
    return r;
}