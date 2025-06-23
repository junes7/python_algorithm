#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
bool cmp(pair<string, int> &a, pair<string, int> &b) {
    if (a.second == b.second && a.first.size() == b.first.size()) return a.first < b.first;
    if (a.second == b.second) return a.first.size() > b.first.size();
    return a.second > b.second;
}
int main(void) {
    int n, m;
    string st;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    map<string, int> dic;
    for (int i = 0; i < n; i++) {
        cin >> st;
        if (st.size() >= m) {
            if (dic.find(st) == dic.end()) {
                dic[st] = 1;
            } else {
                dic[st] += 1;
            }
        }
    }
    vector<pair<string, int>> dic_sort(dic.begin(), dic.end());
    sort(dic_sort.begin(), dic_sort.end(), cmp);
    for (int i = 0; i < dic_sort.size(); i++)
        cout << dic_sort[i].first << "\n";
    return 0;
}