#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int l = 0, total = 250;
    vector<int> arr(3);
    for (int i = 0; i < 3; i++)
        cin >> arr[i];
    while (true) {
        if (l >= arr[0] - arr[1])
            break;
        l += arr[2];
        total += 100;
    }
    cout << total;
    return 0;
}