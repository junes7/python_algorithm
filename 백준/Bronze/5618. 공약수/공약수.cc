#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int gcd(int x, int y) {
    return x % y == 0 ? y : gcd(y, x % y);
}
int main(void) {
    int n, temp;
    cin >> n;
    vector<int> arr(n), rlt1, rlt2;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    temp = arr[0];
    for (int i = 1; i < n; i++)
        temp = gcd(temp, arr[i]);
    for (int i = 1; i < int(sqrt(temp)) + 1; i++) {
        if (temp % i == 0) {
            rlt1.push_back(i);
            if (i * i != temp)
                rlt2.push_back(temp / i);
        }
    }
    reverse(rlt2.begin(), rlt2.end());
    for (int i = 0; i < rlt2.size(); i++)
        rlt1.push_back(rlt2[i]);
    for (int i = 0; i < rlt1.size(); i++)
        cout << rlt1[i] << "\n";
    return 0;
}