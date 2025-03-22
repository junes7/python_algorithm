#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int s = 0, minn = 100;
    vector<int> arr(3);
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
        s += arr[i];
        if (minn > arr[i])
            minn = arr[i];
    }
    cout << s - minn;
    return 0;
}