#include <algorithm>
#include <cctype>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    string st;
    vector<int> alpha(26, 0);
    cin >> n;
    getline(cin, st);
    getline(cin, st);
    for (int i = 0; i < n; i++) {
        if (isalpha(st[i])) {
            alpha[st[i] - 97] += 1;
        }
    }
    cout << *max_element(alpha.begin(), alpha.end());
    return 0;
}