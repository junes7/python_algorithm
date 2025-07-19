#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
bool cmp(const vector<string> &a, const vector<string> &b) {
    return a[0] < b[0];
}
int main(void) {
    int total_R = 0, total_B = 0;
    vector<vector<string>> arr(8, vector<string>(2, ""));
    vector<int> point = {10, 8, 6, 5, 4, 3, 2, 1};
    for (int i = 0; i < 8; i++)
        cin >> arr[i][0] >> arr[i][1];
    sort(arr.begin(), arr.end(), cmp);
    for (int i = 0; i < 8; i++) {
        if (arr[i][1] == "B")
            total_B += point[i];
        else
            total_R += point[i];
    }
    cout << (total_B < total_R ? "Red" : "Blue");
    return 0;
}