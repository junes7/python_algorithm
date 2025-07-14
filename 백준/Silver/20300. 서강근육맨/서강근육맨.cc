#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, l;
    long long maxn = 0;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), less<long long>());
    l = arr.size() % 2 == 0 ? n : n - 1;
    for (int i = 0; i < l / 2; i++)
        maxn = max(arr[i] + arr[l - 1 - i], maxn);
    cout << (arr.size() % 2 == 0 ? maxn : max(maxn, arr[l]));
    return 0;
}