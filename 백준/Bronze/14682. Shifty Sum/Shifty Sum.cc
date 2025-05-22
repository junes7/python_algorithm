#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, k, m = 10, rlt;
    cin >> n;
    cin >> k;
    rlt = n;
    for (int i = 1; i < k + 1; i++)
        rlt += n * pow(m, i);
    cout << rlt;
    return 0;
}