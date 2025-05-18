#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, total;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total += arr[i];
    }
    cout << (total % 3 == 0 ? "yes" : "no");
    return 0;
}