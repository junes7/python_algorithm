#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(void) {
    int d = 0;
    string s;
    cin >> s;
    set<string> alpha;
    while (d < s.size()) {
        for (int i = 0; i < s.size() - d; i++)
            alpha.insert(s.substr(i, d + 1));
        d += 1;
    }
    cout << alpha.size();
    return 0;
}