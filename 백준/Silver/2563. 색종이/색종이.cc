#include <iostream>
using namespace std;

int main(void) {
    int n, xst, yst, cnt = 0, mat[100][100] = {0,};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> xst >> yst;
        for (int j = yst; j < yst + 10; j++) {
            for (int k = xst; k < xst + 10; k++) {
                if (mat[j][k] == 0) {
                    mat[j][k] = 1;
                }
            }
        }
    }
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (mat[i][j] == 1)
                cnt += 1;
        }
    }
    cout << cnt;
    return 0;
}