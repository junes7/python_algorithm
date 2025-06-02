#include <iostream>
using namespace std;
int main(void) {
    int n, total = 0;
    cin >> n;
    for (int i = 0; i < n + 1; i++) {
        for (int j = i; j < n + 1; j++) {
            total += i + j;
        }
    }
    cout << total;
    return 0;
}