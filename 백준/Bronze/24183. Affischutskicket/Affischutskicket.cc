#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    vector<int> type(3);
    int size[3][3] = {{229, 324, 2}, {297, 420, 2}, {210, 297, 1}};
    double total = 0.0;
    for (int i = 0; i < 3; i++) {
        cin >> type[i];
        total += (type[i] * size[i][0] * size[i][1] / pow(10, 6)) * size[i][2];
    }
    cout << fixed;
    cout.precision(6);
    cout << total;
    return 0;
}