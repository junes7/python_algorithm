#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int total = 0, elem;
    vector<vector<int>> arr(8, vector<int>(2));
    vector<int> idx(5);
    for (int i = 0; i < 8; i++) {
        cin >> elem;
        arr[i][0] = elem;
        arr[i][1] = i + 1;
    }
    sort(arr.begin(), arr.end(), [](vector<int> &a, vector<int> &b) {
        return a[0] > b[0];
    });
    for (int i = 0; i < 5; i++) {
        total += arr[i][0];
        idx[i] = arr[i][1];
    }
    sort(idx.begin(), idx.end());
    cout << total << "\n";
    for (int i = 0; i < 5; i++)
        cout << idx[i] << ' ';
    return 0;
}