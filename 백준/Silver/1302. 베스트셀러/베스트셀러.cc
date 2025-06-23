#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
bool cmp(pair<string, int> &a, pair<string, int> &b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}
int main(void) {
    int n;
    cin >> n;
    string st;
    map<string, int> dic;
    for (int i = 0; i < n; i++) {
        cin >> st;
        if (dic.find(st) == dic.end()) {
            dic[st] = 1;
        } else {
            dic[st] += 1;
        }
    }
    vector<pair<string, int>> dicv(dic.begin(), dic.end());
    sort(dicv.begin(), dicv.end(), cmp);
    cout << dicv[0].first;
    return 0;
}