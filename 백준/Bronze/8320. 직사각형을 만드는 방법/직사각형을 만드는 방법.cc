#include <iostream>
using namespace std;
int main(void) {
    int n, rlt = 0;
    cin >> n;
    for (int i = 1; i < n + 1; i++) {
        for (int j = i; j < n / i + 1; j++)
            rlt += 1;
    }
    cout << rlt;
    return 0;
}