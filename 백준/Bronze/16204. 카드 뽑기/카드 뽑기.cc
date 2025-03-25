#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> fr = {m, n - m};
    vector<int> bk = {k, n - k};
    cout << min(fr[0], bk[0]) + min(fr[1], bk[1]);
    return 0;
}