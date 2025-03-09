#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, maxn;
    cin >> n;
    vector<int> arr(n);
    for (int i = 1; i < n + 1; i++) {
        maxn = 0;
        for (int j = 0; j < 5; j++) {
            cin >> arr[j];
            if (maxn < arr[j])
                maxn = arr[j];
        }
        cout << "Case #" << i << ": " << maxn << "\n";
    }
    return 0;
}