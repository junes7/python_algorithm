#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        vector<string> gram_before(n), gram_after(n);
        for (int i = 0; i < n; i++)
            cin >> gram_before[i];
        for (int i = 0; i < n; i++)
            cin >> gram_after[i];
        sort(gram_before.begin(), gram_before.end(), less<string>());
        sort(gram_after.begin(), gram_after.end(), less<string>());
        cout << (gram_before != gram_after ? "CHEATER" : "NOT CHEATER") << "\n";
    }
    return 0;
}