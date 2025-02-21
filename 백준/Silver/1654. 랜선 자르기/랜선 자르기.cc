#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
long find_max_length(int k, int n, vector<int> &cables) {
    int cnt;
    long mid, start = 1, end = *max_element(cables.begin(), cables.end());
    while (start <= end) {
        mid = (start + end) / 2, cnt = 0;
        for (int i = 0; i < k; i++)
            cnt += cables[i] / mid;
        if (cnt < n)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return end;
}
int main(void) {
    int k, n;
    cin >> k >> n;
    vector<int> cables(k);
    for (int i = 0; i < k; i++)
        cin >> cables[i];
    cout << find_max_length(k, n, cables);
    return 0;
}