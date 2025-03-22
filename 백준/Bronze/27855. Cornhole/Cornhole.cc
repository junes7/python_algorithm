#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int e1, e2;
    vector<int> t(2);
    for (int i = 0; i < 2; i++) {
        cin >> e1 >> e2;
        t[i] = 3 * e1 + 1 * e2;
    }
    if (t[0] == t[1])
        cout << "NO SCORE";
    else if (t[0] > t[1])
        cout << 1 << ' ' << t[0] - t[1];
    else
        cout << 2 << ' ' << t[1] - t[0];
    return 0;
}