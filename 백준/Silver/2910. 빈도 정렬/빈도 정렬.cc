#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
bool cmp(pair<int, pair<int, int>> &a, pair<int, pair<int, int>> &b) {
    if (a.second.first == b.second.first) return a.second.second < b.second.second;
    return a.second.first > b.second.first;
}
int main(void) {
    int n, c, elem;
    cin >> n >> c;
    map<int, pair<int, int>> dic;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        if (dic.find(elem) != dic.end())
            dic[elem].first += 1;
        else
            dic[elem] = make_pair(1, i);
    }
    vector<pair<int, pair<int, int>>> dic_sort(dic.begin(), dic.end());
    sort(dic_sort.begin(), dic_sort.end(), cmp);
    for (int i = 0; i < dic_sort.size(); i++) {
        for (int j = 0; j < dic_sort[i].second.first; j++)
            cout << dic_sort[i].first << ' ';
    }
    return 0;
}