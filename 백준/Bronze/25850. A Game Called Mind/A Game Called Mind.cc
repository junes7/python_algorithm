#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
bool cmp(const pair<int, char> &a, const pair<int, char> &b) {
    return a.first < b.first;
}
int main(void) {
    int p, c, cnt = 0, elem;
    cin >> p;
    vector<pair<int, char>> rlt;
    string st = "";
    for (int i = 0; i < p; i++) {
        cin >> c;
        cnt += c;
        for (int j = 0; j < c; j++) {
            cin >> elem;
            rlt.push_back(make_pair(elem, char(65 + i)));
        }
    }
    sort(rlt.begin(), rlt.end(), cmp);
    for (int i = 0; i < cnt; i++)
        st += rlt[i].second;
    cout << st;
    return 0;
}