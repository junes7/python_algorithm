#include <algorithm>
#include <cctype>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    string t;
    cin >> t;
    int maxn, cnt = 0, idx;
    vector<int> num;
    for (int i = 0; i < 26; i++) {
        num.push_back(0);
    }
    for (int i = 0; i < t.size(); i++) {
        if (isupper(t[i])) {
            num[t[i] - 65] += 1;
        } else {
            num[t[i] - 97] += 1;
        }
    }
    maxn = *max_element(num.begin(), num.end());
    for (int i = 0; i < 26; i++) {
        if (maxn == num[i]) {
            cnt += 1;
            idx = i;
        }
    }
    if (cnt > 1)
        cout << "?";
    else
        cout << char(idx + 65);
    return 0;
}