#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, m, a, b, t;
    cin >> n >> m;
    int num[n+1] = {0,};
    for (int i = 1; i < n + 1; i++)
        num[i] = i;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        for (int j = 0; j < (b - a + 1) / 2; j++) {
            t = num[a + j];
            num[a + j] = num[b - j];
            num[b - j] = t;
        }
    }
    for (int i = 1; i < n + 1; i++)
        cout << num[i] << ' ';
    return 0;
}