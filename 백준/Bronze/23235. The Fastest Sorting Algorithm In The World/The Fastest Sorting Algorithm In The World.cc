#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, cnt = 0;
    while (cin >> n) {
        if (n == 0) break;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << "Case " << ++cnt << ": Sorting... done!\n";
    }
    return 0;
}