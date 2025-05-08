#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int cmp(pair<string, int> &v1, pair<string, int> &v2) {
    return v1.first < v2.first;
}
int main(void) {
    int n, m;
    cin >> m >> n;
    vector<string> num = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<pair<string, int>> lst;
    for (int i = m; i < n + 1; i++) {
        lst.push_back(make_pair(i < 10 ? num[i % 10] : num[i / 10] + num[i % 10], i));
    }
    sort(lst.begin(), lst.end(), cmp);
    for (int i = 0; i < lst.size(); i++) {
        if (i > 0 && i % 10 == 0)
            cout << "\n";
        cout << lst[i].second << ' ';
    }
    return 0;
}