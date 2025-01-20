#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    string t;
    vector<string> str;
    for (int i = 0; i < n; i++) {
        cin >> t;
        if (find(str.begin(), str.end(), t) == str.end()) {
            str.push_back(t);
        }
    }
    sort(str.begin(), str.end(), [](const string &a, const string &b) {
        if (a.size() == b.size()) return a < b;
        return a.size() < b.size();
    });
    for (int i = 0; i < str.size(); i++)
        cout << str[i] << endl;
    return 0;
}