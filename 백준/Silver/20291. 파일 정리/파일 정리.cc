#include <algorithm>
#include <iostream>
#include <map>
#include <sstream>
#include <vector>
using namespace std;
bool cmp(const pair<string, int> &a, const pair<string, int> &b) {
    return a.first < b.first;
}
int main(void) {
    int n, idx;
    cin >> n;
    string st;
    vector<string> arr(2);
    map<string, int> dic;
    for (int i = 0; i < n; i++) {
        cin >> st;
        stringstream ss(st);
        idx = 0;
        while (getline(ss, st, '.')) {
            arr[idx++] = st;
        }
        if (dic.find(arr[1]) != dic.end()) {
            dic[arr[1]] += 1;
        } else {
            dic[arr[1]] = 1;
        }
    }
    vector<pair<string, int>> dic_sort(dic.begin(), dic.end());
    sort(dic_sort.begin(), dic_sort.end(), cmp);
    for (int i = 0; i < dic_sort.size(); i++)
        cout << dic_sort[i].first << ' ' << dic_sort[i].second << "\n";
    return 0;
}