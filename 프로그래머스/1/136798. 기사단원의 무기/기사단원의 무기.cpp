#include <string>
#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(int number, int limit, int power) {
    int r=0;
    vector<int> t;
    for(int i=1;i<number+1;i++) {
        t={};
        for(int j=1;j<pow(i,0.5)+1;j++) {
            if(i%j==0) {
                if(find(t.begin(),t.end(),j)==t.end())
                    t.push_back(j);
                if(pow(j,2)!=i)
                    if(find(t.begin(),t.end(),i/j)==t.end())
                        t.push_back(i/j);
            }
        }
        cout<<t.size()<<' ';
        r+=(t.size()>limit)?power:t.size();
    }
    return r;
}