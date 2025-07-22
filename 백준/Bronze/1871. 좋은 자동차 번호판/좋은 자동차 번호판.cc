#include <cmath>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main(void) {
    int t, n, idx, s;
    string st;
    vector<string> arr(2);
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> st;
        stringstream ss(st);
        idx = 0, s = 0;
        while (getline(ss, st, '-'))
            arr[idx++] = st;
        n = stoi(arr[1]);
        for (int j = 0; j < 3; j++)
            s += (arr[0][j] - 65) * pow(26, 2 - j);
        cout << (abs(s - n) <= 100 ? "nice" : "not nice") << "\n";
    }
    return 0;
}