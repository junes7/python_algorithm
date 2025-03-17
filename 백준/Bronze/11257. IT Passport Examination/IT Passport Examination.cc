#include <iostream>
using namespace std;
int main(void) {
    int n, id, strat, manage, tech, total;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> id >> strat >> manage >> tech;
        total = strat + manage + tech;
        if (strat >= 35 * 0.3 && manage >= 25 * 0.3 && tech >= 40 * 0.3 && total >= 55)
            cout << id << ' ' << total << ' ' << "PASS" << "\n";
        else
            cout << id << ' ' << total << ' ' << "FAIL" << "\n";
    }
    return 0;
}