#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t, n;
    long long k, d, a, rlt, scr;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        vector<vector<long long>> arr(n, vector<long long>(3, 0));
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < 3; k++)
                cin >> arr[j][k];
        }
        rlt = 0;
        cin >> k >> d >> a;
        for (int j = 0; j < n; j++) {
            scr = arr[j][0] * k - arr[j][1] * d + arr[j][2] * a;
            if (scr > 0) rlt += scr;
        }
        cout << rlt << "\n";
    }
    return 0;
}