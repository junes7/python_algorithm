#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
    int n, h, w, elem;
    double d;
    cin >> n >> h >> w;
    d = sqrt(w * w + h * h);
    for (int i = 0; i < n; i++) {
        cin >> elem;
        cout << (elem <= d ? "DA" : "NE") << "\n";
    }
    return 0;
}