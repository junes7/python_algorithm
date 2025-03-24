#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int R, C, T, cnt;
    cin >> R >> C;
    vector<vector<int>> arr(R, vector<int>(C, 0));
    vector<int> filter, temp;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> arr[i][j];
        }
    }
    cin >> T;
    for (int r = 0; r < R - 3 + 1; r++) {
        for (int c = 0; c < C - 3 + 1; c++) {
            temp = {};
            for (int i = r; i < r + 3; i++) {
                for (int j = c; j < c + 3; j++) {
                    temp.push_back(arr[i][j]);
                }
            }
            sort(temp.begin(), temp.end(), less<int>());
            filter.push_back(temp[4]);
        }
    }
    cnt = 0;
    for (int k = 0; k < filter.size(); k++) {
        if (filter[k] > T || filter[k] == T)
            cnt += 1;
    }
    cout << cnt;
    return 0;
}