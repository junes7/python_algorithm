#include <algorithm>
#include <cctype>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    string st;
    while (1) {
        vector<int> alpha(26, 0);
        getline(cin, st);
        if (st == "*") break;
        for (int i = 0; i < st.size(); i++) {
            if (isalpha(st[i])) {
                alpha[st[i] - 97] += 1;
            }
        }
        cout << (find(alpha.begin(), alpha.end(), 0) != alpha.end() ? "N" : "Y") << "\n";
    }
    return 0;
}