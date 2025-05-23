#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t, len;
    long long m, total;
    string st;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> st;
        len = st.size(), m = 1, total = 0;
        vector<long long> arr(len);
        for (int i = 0; i < len; i++)
            arr[i] = st[i] - 48;
        sort(arr.begin(), arr.end(), greater<long long>());
        for (int i = len - 2; i >= 0; i--) {
            total += arr[i] * m;
            m *= 10;
        }
        cout << total + arr[len - 1] << "\n";
    }
    return 0;
}