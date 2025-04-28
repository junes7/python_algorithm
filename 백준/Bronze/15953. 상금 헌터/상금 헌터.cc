#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int a, b, s = 1, m = 1, t, total;
    vector<pair<int, int>> arra, arrb;
    vector<int> prizea = {5000000, 3000000, 2000000, 500000, 300000, 100000};
    vector<int> prizeb = {5120000, 2560000, 1280000, 640000, 320000};
    for (int i = 1; i < 7; i++) {
        arra.push_back(make_pair(s, s + i));
        s += i;
    }
    for (int i = 0; i < 5; i++) {
        arrb.push_back(make_pair(m, m + pow(2, i)));
        m += pow(2, i);
    }
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        total = 0;
        for (int j = 0; j < 6; j++) {
            if (arra[j].first <= a && a < arra[j].second) {
                total += prizea[j];
                break;
            }
        }
        for (int j = 0; j < 5; j++) {
            if (arrb[j].first <= b && b < arrb[j].second) {
                total += prizeb[j];
                break;
            }
        }
        cout << total << "\n";
    }
    return 0;
}