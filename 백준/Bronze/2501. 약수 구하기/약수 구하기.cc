#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int a, b, d = 1;
    vector<int> num;
    cin >> a >> b;
    while (d <= a) {
        if (a % d == 0)
            num.push_back(d);
        d += 1;
    }
    cout << (num.size() >= b ? num[b - 1] : 0) << endl;
    return 0;
}