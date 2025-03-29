#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main(void) {
    int n, idx = 0;
    string st;
    cin >> n;
    vector<vector<string>> menu(n);
    getline(cin, st);
    for (int i = 0; i < n; i++) {
        getline(cin, st);
        stringstream ss(st);
        while (getline(ss, st, ' ')) {
            menu[i].push_back(st);
        }
    }
    for (int i = 0; i < menu[0].size(); i++) {
        cout << menu[0][i] << "\n";
    }
    return 0;
}