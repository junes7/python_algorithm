#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(void) {
    int n;
    string st;
    cin >> n;
    cin >> st;
    vector<int> cur = {0, 0};
    map<char, pair<int, int>> dir = {{'N', {-1, 0}}, {'S', {1, 0}}, {'W', {0, -1}}, {'E', {0, 1}}};
    for (int i = 0; i < n; i++) {
        cur[0] += dir[st[i]].first;
        cur[1] += dir[st[i]].second;
    }
    cout << abs(cur[0]) + abs(cur[1]);
    return 0;
}