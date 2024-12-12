#include <vector>

using namespace std;

int solution(vector<int> nums) {
    int r=0,sum,d;
    vector<int> t;
    for(int i=0;i<nums.size()-2;i++) {
        for(int j=i+1;j<nums.size()-1;j++) {
            for(int k=j+1;k<nums.size();k++) {
                sum=0,d=2,t={};
                sum=nums[i]+nums[j]+nums[k]; 
                while(sum>1) {
                    if(sum%d==0) {
                        t.push_back(d);
                        sum/=d;
                    } else {
                        d+=1;
                    }
                }
                if(t.size()==1)
                    r+=1;
            }
        }
    }
    return r;
}