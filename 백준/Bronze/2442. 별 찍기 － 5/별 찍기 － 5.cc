#include <iostream>
using namespace std;
int main(void) {
    int n, end, med;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    end = 2 * n - 1;
    med = end / 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < med - i; j++)
            cout << ' ';
        for (int j = med - i; j < end - (med - i); j++)
            cout << '*';
        cout << "\n";
    }
    return 0;
}