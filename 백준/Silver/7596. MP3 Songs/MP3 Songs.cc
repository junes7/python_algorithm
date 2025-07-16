#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, idx = 1;
    while (1) {
        cin >> n;
        if (n == 0) break;
        vector<string> arr(n + 1);
        for (int i = 0; i < n + 1; i++)
            getline(cin, arr[i]);
        sort(arr.begin(), arr.end(), less<string>());
        cout << idx++ << "\n";
        for (int i = 1; i < n + 1; i++)
            cout << arr[i] << "\n";
    }
    return 0;
}