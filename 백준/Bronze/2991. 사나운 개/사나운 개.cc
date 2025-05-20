#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int a, b, c, d, cnt;
    vector<int> arr(3);
    cin >> a >> b >> c >> d;
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
        cnt = 0;
        if (0 < arr[i] % (a + b) && arr[i] % (a + b) <= a)
            cnt += 1;
        if (0 < arr[i] % (c + d) && arr[i] % (c + d) <= c)
            cnt += 1;
        cout << cnt << "\n";
    }
    return 0;
}