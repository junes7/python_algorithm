#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, cnt = 0;
    while (true) {
        cin >> n;
        if (n == 0) break;
        vector<double> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << fixed;
        cout.precision(1);
        cout << "Case " << ++cnt << ": " << (n % 2 != 0 ? arr[(n + 1) / 2 - 1] : (arr[n / 2 - 1] + arr[n / 2]) / 2) << "\n";
    }
    return 0;
}