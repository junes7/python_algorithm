#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, cnt, rlt;
    string st;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> st;
        vector<int> alpha(26, 0), v;
        cnt = 0, rlt = 0;
        for (int j = 0; j < st.size(); j++)
            alpha[st[j] - 97]++;
        for (int j = 0; j < 26; j++) {
            if (alpha[j]) {
                v.push_back(alpha[j]);
                cnt += 1;
            }
        }
        sort(v.begin(), v.end(), less<int>());
        for (int j = 0; j < cnt - 2; j++)
            rlt += v[j];
        cout << rlt << "\n";
    }
    return 0;
}