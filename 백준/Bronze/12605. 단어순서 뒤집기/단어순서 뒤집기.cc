#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main(void) {
    int t;
    string st;
    cin >> t;
    getline(cin, st);
    for (int i = 1; i < t + 1; i++) {
        getline(cin, st);
        vector<string> arr;
        stringstream ss(st);
        while (getline(ss, st, ' '))
            arr.push_back(st);
        reverse(arr.begin(), arr.end());
        cout << "Case #" << i << ": ";
        for (int j = 0; j < arr.size(); j++)
            cout << arr[j] << ' ';
        cout << "\n";
    }
    return 0;
}