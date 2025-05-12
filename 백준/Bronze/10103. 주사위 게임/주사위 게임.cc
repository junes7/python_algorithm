#include <iostream>
using namespace std;
int main(void) {
    int n, x, y, total[2] = {100, 100};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if (x < y)
            total[0] -= y;
        else if (x > y)
            total[1] -= x;
    }
    for (int i = 0; i < 2; i++)
        cout << total[i] << "\n";
    return 0;
}