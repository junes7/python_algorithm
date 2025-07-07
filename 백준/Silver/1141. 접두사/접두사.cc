#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, rlt;
    string st;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    rlt = n;
    sort(arr.begin(), arr.end(), less<string>());
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            st = arr[j].substr(0, arr[i].size());
            if (arr[i] == st) {
                rlt -= 1;
                break;
            }
        }
    }
    cout << rlt;
    return 0;
}