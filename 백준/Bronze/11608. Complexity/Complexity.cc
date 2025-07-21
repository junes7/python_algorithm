#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    string st;
    int cnt = 0, rlt = 0;
    cin >> st;
    vector<int> alpha(26, 0), v;
    for (int i = 0; i < st.size(); i++)
        alpha[st[i] - 97]++;
    for (int i = 0; i < 26; i++) {
        if (alpha[i]) {
            v.push_back(alpha[i]);
            cnt += 1;
        }
    }
    sort(v.begin(), v.end(), less<int>());
    for (int i = 0; i < cnt - 2; i++)
        rlt += v[i];
    cout << rlt;
    return 0;
}