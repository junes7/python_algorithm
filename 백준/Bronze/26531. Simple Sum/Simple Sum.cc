#include <cctype>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main(void) {
    string st;
    getline(cin, st);
    stringstream ss(st);
    vector<int> num;
    while (getline(ss, st, ' ')) {
        if (isdigit(st[0])) {
            num.push_back(stoi(st));
        }
    }
    cout << (num[0] + num[1] == num[2] ? "YES" : "NO");
    return 0;
}