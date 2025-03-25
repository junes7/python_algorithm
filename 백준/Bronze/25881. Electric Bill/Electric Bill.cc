#include <iostream>
using namespace std;
int main(void) {
    int gen, add, n, consu;
    cin >> gen >> add;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> consu;
        cout << consu << ' ' << (consu <= 1000 ? gen * consu : 1000 * gen + (consu - 1000) * add) << "\n";
    }
    return 0;
}