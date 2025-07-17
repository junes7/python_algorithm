#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    long long total = 0;
    vector<long long> price(3), jars(3);
    for (int i = 0; i < 3; i++)
        cin >> price[i];
    for (int i = 0; i < 3; i++)
        cin >> jars[i];
    sort(price.begin(), price.end(), less<int>());
    sort(jars.begin(), jars.end(), less<int>());
    for (int i = 0; i < 3; i++)
        total += price[i] * jars[i];
    cout << total;
    return 0;
}