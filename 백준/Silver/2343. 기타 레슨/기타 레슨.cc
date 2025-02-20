#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
bool can_record(vector<int> &lessons, int m, int size) {
    int cnt = 1, cur_sum = 0;
    for (int i = 0; i < lessons.size(); i++) {
        if (lessons[i] > size)
            return false;
        if (cur_sum + lessons[i] > size) {
            cnt += 1;
            cur_sum = 0;
        }
        cur_sum += lessons[i];
    }
    return cnt <= m;
}
int min_bluray_size(int n, int m, vector<int> &lessons) {
    int result, mid, left = *max_element(lessons.begin(), lessons.end()), right = accumulate(lessons.begin(), lessons.end(), 0);
    result = right;
    while (left <= right) {
        mid = (left + right) / 2;
        if (can_record(lessons, m, mid)) {
            result = mid;
            right = mid - 1;
        } else
            left = mid + 1;
    }
    return result;
}
int main(void) {
    int n, m;
    cin >> n >> m;
    vector<int> lessons(n);
    for (int i = 0; i < n; i++)
        cin >> lessons[i];
    cout << min_bluray_size(n, m, lessons);
    return 0;
}