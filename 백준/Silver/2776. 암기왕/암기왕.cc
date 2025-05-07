#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int binary_search(int s, int e, vector<int> &nb1, int num) {
    int mid;
    while (s <= e) {
        mid = (s + e) / 2;
        if (nb1[mid] == num)
            return 1;
        else if (nb1[mid] < num)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return 0;
}
int main(void) {
    int k, n, m;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> n;
        vector<int> nb1(n);
        for (int j = 0; j < n; j++)
            cin >> nb1[j];
        sort(nb1.begin(), nb1.end(), less<int>());
        cin >> m;
        vector<int> nb2(m);
        for (int j = 0; j < m; j++) {
            cin >> nb2[j];
            cout << binary_search(0, n - 1, nb1, nb2[j]) << "\n";
        }
    }
    return 0;
}