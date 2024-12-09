#include <string>
#include <vector>
// #include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> mats, vector<vector<string>> park) {
    vector<int> r;
    bool flagr, flagc;
    sort(mats.begin(),mats.end(),greater<int>());
    for(int i=0;i<park.size();i++) {
        for(int j=0;j<park[i].size();j++) {
            if(park[i][j]=="-1") {
                for(int k=0;k<mats.size();k++) {
                    if(i+mats[k]<=park.size() && j+mats[k]<=park[i].size()) {
                        flagr=true, flagc=true;
                        // cout<<i<<' '<<i+mats[k]<<' '<<j<<' '<<j+mats[k]<<endl;
                        for(int l=i;l<i+mats[k];l++) {
                            for(int m=j;m<j+mats[k];m++) {
                                if(park[l][m]!="-1") {
                                    flagr=false;
                                    flagc=false;
                                    break;
                                }
                            }
                        }
                        // cout<<"mats[k]: "<<mats[k]<<endl;
                        if(flagr && flagc) {
                            r.push_back(mats[k]);
                            break;
                        }
                    }
                }
            }
        }
    }
    return (r.size()==0)?-1:*max_element(r.begin(),r.end());
}