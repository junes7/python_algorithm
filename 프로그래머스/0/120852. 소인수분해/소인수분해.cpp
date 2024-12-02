#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(int n) {
    vector<int> r;
    int d=2;
    while(n>1) {
        if(n%d==0) {
            n/=d;
            if(find(r.begin(),r.end(),d)==r.end())
                r.push_back(d);
        } else
            d+=1;
    }
    return r;
}