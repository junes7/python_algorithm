#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
bool cmp(const pair<char, int> &a, const pair<char, int> &b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}
int main(void) {
    string st, rlt = "";
    cin >> st;
    map<char, int> dic;
    for (int i = 0; i < st.size(); i++) {
        if (dic.find(st[i]) != dic.end()) {
            dic[st[i]] += 1;
        } else {
            dic[st[i]] = 1;
        }
    }
    vector<pair<char, int>> dic_sort(dic.begin(), dic.end());
    sort(dic_sort.begin(), dic_sort.end(), cmp);
    for (int i = 0; i < dic_sort.size(); i++) {
        for (int j = 0; j < dic_sort[i].second; j++) {
            rlt += dic_sort[i].first;
        }
    }
    cout << rlt;
    return 0;
}