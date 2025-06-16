#include <algorithm>
#include <iostream>
using namespace std;
int main(void) {
    long long n;
    string rlt;
    cin >> n;
    while (n > 0) {
        rlt += n % 2 + 48;
        n /= 2;
    }
    reverse(rlt.begin(), rlt.end());
    cout << rlt;
    return 0;
}