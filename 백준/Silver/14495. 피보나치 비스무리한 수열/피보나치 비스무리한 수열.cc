#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    vector<long long> f(116, 1);
    for (int i = 4; i < 117; i++)
        f[i] = f[i - 1] + f[i - 3];
    cout << f[n];
    return 0;
}