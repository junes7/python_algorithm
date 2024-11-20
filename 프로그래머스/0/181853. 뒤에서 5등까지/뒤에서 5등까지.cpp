#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> r;
    // sort(num_list.begin(),num_list.end(),less<int>());
    for(int i=0;i<num_list.size()-1;i++) {
        for(int j=0; j<num_list.size()-i-1;j++) {
            if(num_list[j]>num_list[j+1]) {
                int t=num_list[j];
                num_list[j]=num_list[j+1];
                num_list[j+1]=t;
            }
        }
    }
    for(int i=0;i<5;i++) {
        r.push_back(num_list[i]);
    }
    return r;
}