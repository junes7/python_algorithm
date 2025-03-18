#include <iostream>
using namespace std;
int main(void) {
    int n, h, w, area = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> h >> w;
        if (area < h * w)
            area = h * w;
    }
    cout << area;
    return 0;
}