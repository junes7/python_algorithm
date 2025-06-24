#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
bool cmp(pair<long long, int> &a, pair<long long, int> &b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}
int main(void) {
    int n;
    long elem;
    cin >> n;
    map<long long, int> dic;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        if (dic.find(elem) == dic.end())
            dic[elem] = 1;
        else
            dic[elem] += 1;
    }
    vector<pair<long long, int>> dic_sort(dic.begin(), dic.end());
    sort(dic_sort.begin(), dic_sort.end(), cmp);
    cout << dic_sort[0].first;
    return 0;
}