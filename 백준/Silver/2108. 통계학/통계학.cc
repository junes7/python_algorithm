#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
bool cmp(pair<int, int> &a, pair<int, int> &b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}
int main(void) {
    int n, frq;
    double total = 0;
    cin >> n;
    vector<int> arr(n);
    map<int, int> dic;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (dic.find(arr[i]) == dic.end())
            dic[arr[i]] = 1;
        else
            dic[arr[i]] += 1;
        total += arr[i];
    }
    sort(arr.begin(), arr.end(), less<int>());
    vector<pair<int, int>> dic_sort(dic.begin(), dic.end());
    sort(dic_sort.begin(), dic_sort.end(), cmp);
    if (dic_sort.size() == 1)
        frq = dic_sort[0].first;
    else
        frq = dic_sort[0].second == dic_sort[1].second ? dic_sort[1].first : dic_sort[0].first;
    cout << int(round(total / n)) << "\n";
    cout << arr[n / 2] << "\n";
    cout << frq << "\n";
    cout << arr.back() - arr.front();
    return 0;
}