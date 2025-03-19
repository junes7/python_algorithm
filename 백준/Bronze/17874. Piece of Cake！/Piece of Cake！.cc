#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, h, v, m = 0;
    cin >> n >> h >> v;
    vector<int> row = {h, n - h}, col = {v, n - v};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (m < row[i] * col[j])
                m = row[i] * col[j];
        }
    }
    cout << m * 4;
    return 0;
}