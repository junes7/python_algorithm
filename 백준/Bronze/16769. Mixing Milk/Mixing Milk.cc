#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int idx, nidx, t;
    vector<vector<int>> arr(3, vector<int>(2, 0));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++)
            cin >> arr[i][j];
    }
    for (int i = 0; i < 100; i++) {
        idx = i % 3, nidx = (i + 1) % 3;
        t = arr[idx][1];
        arr[idx][1] = max(arr[idx][1] - (arr[nidx][0] - arr[nidx][1]), 0);
        arr[nidx][1] = min(arr[nidx][0], t + arr[nidx][1]);
    }
    for (int i = 0; i < 3; i++)
        cout << arr[i][1] << "\n";
    return 0;
}