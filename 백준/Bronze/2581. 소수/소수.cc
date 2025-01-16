#include <cmath>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main(void) {
    int n, end;
    bool flag;
    vector<int> primeNum;
    cin >> n;
    cin >> end;
    if (n == 1) n += 1;
    while (n <= end) {
        flag = true;
        for (int i = 2; i < int(sqrt(n)) + 1; i++) {
            if (n % i == 0) {
                flag = false;
                break;
            }
        }
        if (flag)
            primeNum.push_back(n);
        n += 1;
    }
    if (primeNum.size() == 0)
        cout << -1;
    else {
        cout << accumulate(primeNum.begin(), primeNum.end(), 0) << endl;
        cout << primeNum[0];
    }
    return 0;
}