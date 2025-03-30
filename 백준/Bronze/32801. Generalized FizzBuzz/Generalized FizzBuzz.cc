#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, a, b;
    vector<int> rlt(3, 0);
    cin >> n >> a >> b;
    for (int i = 1; i < n + 1; i++) {
        if (i % a == 0) {
            if (i % b != 0)
                rlt[0] += 1;
            else
                rlt[2] += 1;
        } else if (i % b == 0)
            rlt[1] += 1;
    }
    for (int i = 0; i < 3; i++)
        cout << rlt[i] << ' ';
    return 0;
}