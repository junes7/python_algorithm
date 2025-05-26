#include <iostream>
using namespace std;
int main(void) {
    double A, B, z;
    int n;
    char q;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> A >> B;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> z >> q;
        cout << fixed;
        cout.precision(12);
        cout << (q == 'A' ? z * B / A : z * A / B) << "\n";
    }
    return 0;
}