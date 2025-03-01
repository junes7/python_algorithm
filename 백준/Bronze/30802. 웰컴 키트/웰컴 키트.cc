#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, cnt = 0, t, p;
    cin >> n;
    vector<int> size(6);
    for (int i = 0; i < 6; i++)
        cin >> size[i];
    cin >> t >> p;
    for (int i = 0; i < 6; i++)
        cnt += (size[i] + t - 1) / t;
    cout << cnt << "\n";
    cout << n / p << ' ' << n % p;
    return 0;
}