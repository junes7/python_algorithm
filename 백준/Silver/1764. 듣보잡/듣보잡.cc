#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
    int n, m, start, end, mid;
    vector<string> hloss, interloss;
    string t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> t;
        hloss.push_back(t);
    }
    sort(hloss.begin(), hloss.end(), less<string>());
    for (int i = 0; i < m; i++) {
        cin >> t;
        start = 0, end = n - 1;
        while (start <= end) {
            mid = (start + end) / 2;
            if (hloss[mid] == t) {
                interloss.push_back(t);
                break;
            } else if (hloss[mid] > t) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
    }
    sort(interloss.begin(), interloss.end(), less<string>());
    cout << interloss.size() << endl;
    for (int i = 0; i < interloss.size(); i++)
        cout << interloss[i] << endl;
    return 0;
}