#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> r;
    sort(num_list.begin(),num_list.end(),less<int>());
    for(int i=0;i<5;i++) {
        r.push_back(num_list[i]);
    }
    return r;
}