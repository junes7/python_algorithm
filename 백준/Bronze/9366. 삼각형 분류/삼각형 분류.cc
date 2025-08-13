#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, maxn, total;
    cin >> n;
    vector<int> arr(3);
    for (int i = 1; i < n + 1; i++) {
        maxn = 0, total = 0;
        for (int j = 0; j < 3; j++) {
            cin >> arr[j];
            if (maxn < arr[j]) maxn = arr[j];
            total += arr[j];
        }
        if (arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[0])
            cout << "Case #" << i << ": equilateral\n";
        else if (maxn < total - maxn)
            cout << "Case #" << i << (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2] ? ": isosceles" : ": scalene") << "\n";
        else
            cout << "Case #" << i << ": invalid!\n";
    }
    return 0;
}