#include <algorithm>
#include <cctype>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    string st;
    char tmp;
    vector<char> alpha;
    while (1) {
        getline(cin, st);
        if (st == "#") break;
        alpha = {};
        for (int i = 0; i < st.size(); i++) {
            if (isalpha(st[i])) {
                tmp = isupper(st[i]) ? tolower(st[i]) : st[i];
                if (find(alpha.begin(), alpha.end(), tmp) == alpha.end())
                    alpha.push_back(tmp);
            }
        }
        cout << alpha.size() << "\n";
    }
    return 0;
}