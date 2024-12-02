#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> arr) {
    int cnt=0;
    bool flag=false;
    vector<int> t=arr;
    while(!flag) {
        for(int i=0;i<arr.size();i++) {
            if(arr[i]%2==0 and arr[i]>=50)
                t[i]=arr[i]/2;
            else if(arr[i]%2==1 and arr[i]<50)
                t[i]=arr[i]*2+1;
        }
        cnt+=1;
        flag=equal(arr.begin(),arr.end(),t.begin());
        arr=t;
    }
    return cnt-1;
}