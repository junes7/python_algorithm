#include <iostream>
using namespace std;
int main(void) {
    long long n, rlt = 0;
    cin >> n;
    for (long long i = 1; i < n; i++)
        rlt += n * i + i;
    cout << rlt;
    return 0;
}