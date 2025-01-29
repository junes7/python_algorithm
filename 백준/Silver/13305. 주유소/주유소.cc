#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    long elem, minprice;
    long long money = 0;
    vector<long> distances, prices;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        cin >> elem;
        distances.push_back(elem);
    }
    for (int i = 0; i < n; i++) {
        cin >> elem;
        prices.push_back(elem);
    }
    minprice = prices[0];
    for (int i = 1; i < n; i++) {
        money += minprice * distances[i - 1];
        if (minprice >= prices[i])
            minprice = prices[i];
    }
    cout << money;
    return 0;
}