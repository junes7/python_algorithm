#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, rlt, idx = 1;
    while (1) {
        cin >> n;
        if (n == 0) break;
        vector<pair<string, int>> arr(n);
        rlt = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i].first;
            arr[i].second = i;
        }
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++)
            rlt += abs(arr[i].second - i);
        cout << "Site " << idx++ << ": " << rlt << "\n";
    }
    return 0;
}