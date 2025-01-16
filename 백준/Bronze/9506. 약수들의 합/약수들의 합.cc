#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main(void) {
    int a, d, s;
    vector<int> num;
    while (1) {
        cin >> a;
        if (a == -1)
            break;
        else {
            d = 1, num = {};
            while (d < a) {
                if (a % d == 0)
                    num.push_back(d);
                d += 1;
            }
        }
        s = accumulate(num.begin(), num.end(), 0);
        if (s == a) {
            cout << a << " = ";
            for (int i = 0; i < num.size(); i++) {
                if (i == num.size() - 1)
                    cout << num[i] << endl;
                else
                    cout << num[i] << " + ";
            }
        } else {
            cout << a << " is NOT perfect." << endl;
        }
    }
    return 0;
}