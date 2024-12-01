#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> r, temp;
    for(int i=0;i<emergency.size();i++) {
        temp.push_back(emergency[i]);
    }
    sort(temp.begin(),temp.end(),greater<int>());
    for(int i=0;i<emergency.size();i++) {
        if(find(temp.begin(),temp.end(),emergency[i])!=temp.end()) {
            r.push_back(find(temp.begin(),temp.end(),emergency[i])-temp.begin()+1);
        }
    }
    return r;
}