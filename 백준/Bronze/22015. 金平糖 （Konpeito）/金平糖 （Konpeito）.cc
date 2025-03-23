#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int maxn = 0, s = 0;
    vector<int> arr(3);
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
        if (maxn < arr[i])
            maxn = arr[i];
    }
    for (int i = 0; i < 3; i++)
        s += maxn - arr[i];
    cout << s;
    return 0;
}