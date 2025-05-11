#include <iostream>
using namespace std;
int main(void) {
    int n, r, e, c;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> r >> e >> c;
        cout << (e - r == c ? "does not matter" : (e - r > c ? "advertise" : "do not advertise")) << "\n";
    }
    return 0;
}