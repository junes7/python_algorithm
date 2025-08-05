#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    vector<string> ingred(n), used(n - 1);
    for (int i = 0; i < n; i++)
        cin >> ingred[i];
    for (int i = 0; i < n - 1; i++)
        cin >> used[i];
    for (int i = 0; i < n; i++) {
        if (find(used.begin(), used.end(), ingred[i]) == used.end()) {
            cout << ingred[i];
            break;
        }
    }
    return 0;
}