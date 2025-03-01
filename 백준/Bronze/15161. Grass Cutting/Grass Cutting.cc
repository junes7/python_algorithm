#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int k;
    cin >> k;
    vector<int> rows(3), cols(3);
    vector<vector<int>> arr(10, vector<int>(10, 1));
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> rows[j];
        }
        for (int j = 0; j < 3; j++) {
            cin >> cols[j];
        }
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                if (find(rows.begin(), rows.end(), j + 1) != rows.end()) {
                    arr[j][k] = 1;
                } else if (find(cols.begin(), cols.end(), k + 1) != cols.end()) {
                    arr[j][k] = 1;
                } else {
                    arr[j][k] += 1;
                }
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << "\n";
    }
    return 0;
}