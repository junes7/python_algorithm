#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    vector<int> arr(3);
    for (int i = 0; i < 3; i++)
        cin >> arr[i];
    cout << min(min(arr[1] * 2 + arr[2] * 4, (arr[0] + arr[2]) * 2), arr[0] * 4 + arr[1] * 2);
    return 0;
}