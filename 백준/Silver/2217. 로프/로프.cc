#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, elem, best = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    vector<int> ropes;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        ropes.push_back(elem);
    }
    sort(ropes.begin(), ropes.end(), less<int>());
    for (int i = 0; i < n; i++) {
        if (best < ropes[i] * (n - i))
            best = ropes[i] * (n - i);
    }
    cout << best;
    return 0;
}