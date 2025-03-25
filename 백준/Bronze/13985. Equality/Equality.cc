#include <cctype>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main(void) {
    string st, t;
    int idx = 0, s = 0;
    vector<int> arr(3);
    getline(cin, st);
    stringstream ss(st);
    while (getline(ss, st, ' ')) {
        if (isdigit(st[0]))
            arr[idx++] = st[0] - 48;
    }
    cout << (arr[0] + arr[1] == arr[2] ? "YES" : "NO");
    return 0;
}