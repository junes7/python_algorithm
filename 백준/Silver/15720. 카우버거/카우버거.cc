#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int b, c, d, min_val, rlt = 0, total = 0;
    cin >> b >> c >> d;
    vector<int> burgers(b), sides(c), drinks(d);
    for (int i = 0; i < b; i++) {
        cin >> burgers[i];
        total += burgers[i];
    }
    for (int i = 0; i < c; i++) {
        cin >> sides[i];
        total += sides[i];
    }
    for (int i = 0; i < d; i++) {
        cin >> drinks[i];
        total += drinks[i];
    }
    sort(burgers.begin(), burgers.end(), greater<int>());
    sort(sides.begin(), sides.end(), greater<int>());
    sort(drinks.begin(), drinks.end(), greater<int>());
    min_val = min(min(b, c), d);
    for (int i = 0; i < min_val; i++)
        rlt += (burgers[i] + sides[i] + drinks[i]) * 0.9;
    for (int i = min_val; i < b; i++)
        rlt += burgers[i];
    for (int i = min_val; i < c; i++)
        rlt += sides[i];
    for (int i = min_val; i < d; i++)
        rlt += drinks[i];
    cout << total << "\n";
    cout << rlt;
    return 0;
}