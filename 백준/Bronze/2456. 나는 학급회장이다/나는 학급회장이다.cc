#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, elem, maxn, pow_m, elected;
    cin >> n;
    vector<int> total(3, 0), squared(3, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> elem;
            total[j] += elem;
            squared[j] += pow(elem, 2);
        }
    }
    maxn = *max_element(total.begin(), total.end());
    if (count(total.begin(), total.end(), maxn) == 1) {
        for (int i = 0; i < 3; i++) {
            if (total[i] == maxn) {
                cout << i + 1 << ' ' << maxn;
                break;
            }
        }
    } else {
        pow_m = *max_element(squared.begin(), squared.end());
        elected = 0;
        for (int i = 0; i < 3; i++) {
            if (squared[i] == pow_m) {
                elected = i;
                break;
            }
        }
        if (count(squared.begin(), squared.end(), pow_m) > 1)
            cout << 0 << ' ' << total[elected];
        else
            cout << elected + 1 << ' ' << total[elected];
    }
    return 0;
}