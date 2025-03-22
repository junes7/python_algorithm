#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, cnt = 0;
    char t;
    cin >> n;
    vector<char> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> t;
    for (int i = 0; i < n; i++) {
        if (arr[i] == t)
            cnt += 1;
    }
    cout << cnt;
    return 0;
}