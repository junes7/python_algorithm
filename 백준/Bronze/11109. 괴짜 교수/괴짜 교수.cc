#include <iostream>
using namespace std;
int main(void) {
    int t, d, n, s, p;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> d >> n >> s >> p;
        cout << (n * s == d + n * p ? "does not matter" : (n * s > d + n * p ? "parallelize" : "do not parallelize")) << "\n";
    }
    return 0;
}