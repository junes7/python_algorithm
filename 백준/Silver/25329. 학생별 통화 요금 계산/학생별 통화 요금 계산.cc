#include <algorithm>
#include <iostream>
#include <map>
#include <sstream>
#include <vector>
using namespace std;
bool cmp(const pair<string, int> &a, const pair<string, int> &b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}
int main(void) {
    int n, idx, s;
    cin >> n;
    string time, name;
    vector<int> t(2);
    map<string, int> dic;
    for (int i = 0; i < n; i++) {
        cin >> time >> name;
        stringstream ss(time);
        idx = 0;
        while (getline(ss, time, ':'))
            t[idx++] = stoi(time);
        s = t[0] * 60 + t[1];
        if (dic.find(name) != dic.end())
            dic[name] += s;
        else
            dic[name] = s;
    }
    map<string, int>::iterator iter;
    for (iter = dic.begin(); iter != dic.end(); iter++) {
        n = iter->second - 100 < 0 ? 0 : iter->second - 100;
        iter->second = 10 + (n / 50 + (n % 50 == 0 ? 0 : 1)) * 3;
    }
    vector<pair<string, int>> dic_sort(dic.begin(), dic.end());
    sort(dic_sort.begin(), dic_sort.end(), cmp);
    for (int i = 0; i < dic_sort.size(); i++)
        cout << dic_sort[i].first << ' ' << dic_sort[i].second << "\n";
    return 0;
}