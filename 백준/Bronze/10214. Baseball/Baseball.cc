#include <iostream>
using namespace std;
int main(void) {
    int t, k, y, tot_k, tot_y;
    cin >> t;
    for (int i = 0; i < t; i++) {
        tot_k = 0, tot_y = 0;
        for (int j = 0; j < 9; j++) {
            cin >> y >> k;
            tot_y += y;
            tot_k += k;
        }
        cout << (tot_k == tot_y ? "Draw" : (tot_y > tot_k ? "Yonsei" : "Korea")) << "\n";
    }
    return 0;
}