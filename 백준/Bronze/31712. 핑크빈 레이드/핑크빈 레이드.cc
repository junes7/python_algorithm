#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int tar, time = 0;
    vector<vector<int>> arr(3, vector<int>(2, 0));
    for (int i = 0; i < 3; i++)
        cin >> arr[i][0] >> arr[i][1];
    cin >> tar;
    sort(arr.begin(), arr.end(), less<vector<int>>());
    while (1) {
        for (int i = 0; i < 3; i++) {
            if (time % arr[i][0] == 0) {
                tar -= arr[i][1];
            }
        }
        if (tar <= 0)
            break;
        else
            time += 1;
    }
    cout << time;
    return 0;
}