#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> r;
    int st=0, ed=0;
    for(int i=arr.size()-1;i>0;i--) {
        if(arr[i]==2) {
            st=find(arr.begin(),arr.end(),2)-arr.begin();
            ed=i;
            break;
        }   
    }
    if(st==0 and ed==0) {
        r.push_back(-1);
    } else {
        for(int i=st;i<ed+1;i++) {
            r.push_back(arr[i]);
        }
    }
    return r;
}