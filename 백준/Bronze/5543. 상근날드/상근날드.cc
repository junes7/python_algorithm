#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t, price = 4000;
    vector<int> burgers(3), drinks(2);
    for (int i = 0; i < 3; i++)
        cin >> burgers[i];
    for (int i = 0; i < 2; i++)
        cin >> drinks[i];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            t = burgers[i] + drinks[j] - 50;
            if (price > t)
                price = t;
        }
    }
    cout << price;
    return 0;
}