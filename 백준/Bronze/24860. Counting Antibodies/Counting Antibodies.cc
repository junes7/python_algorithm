#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    vector<long long> k(2), e(2), h(3);
    for (int i = 0; i < 2; i++)
        cin >> k[i];
    for (int i = 0; i < 2; i++)
        cin >> e[i];
    for (int i = 0; i < 3; i++)
        cin >> h[i];
    cout << (k[0] * k[1] + e[0] * e[1]) * h[0] * h[1] * h[2];
    return 0;
}