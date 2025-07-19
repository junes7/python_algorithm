#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}
int main(void) {
    int n, m, elem;
    cin >> n >> m;
    map<int, int> dic;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> elem;
            if (elem == 1) {
                if (dic.find(j + 1) != dic.end())
                    dic[j + 1] += 1;
                else
                    dic[j + 1] = 1;
            }
        }
    }
    vector<pair<int, int>> dic_sort(dic.begin(), dic.end());
    sort(dic_sort.begin(), dic_sort.end(), cmp);
    for (int i = 0; i < m; i++)
        cout << dic_sort[i].first << ' ';
    return 0;
}