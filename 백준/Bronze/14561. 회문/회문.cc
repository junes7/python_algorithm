#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t, n, len;
    long long a, tmp;
    bool flag;
    cin >> t;
    vector<char> arr;
    for (int i = 0; i < t; i++) {
        cin >> a >> n;
        arr = {};
        while (a > 0) {
            tmp = a % n;
            arr.push_back(tmp < 10 ? char(tmp + 48) : char(tmp + 55));
            a /= n;
        }
        len = arr.size(), flag = true;
        for (int j = 0; j < len / 2; j++) {
            if (arr[j] != arr[len - 1 - j]) {
                flag = false;
                break;
            }
        }
        cout << (flag ? 1 : 0) << "\n";
    }
    return 0;
}