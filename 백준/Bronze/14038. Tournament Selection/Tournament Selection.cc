#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int cnt;
    vector<char> arr(6);
    for (int i = 0; i < 6; i++)
        cin >> arr[i];
    cnt = count(arr.begin(), arr.end(), 'W');
    if (cnt >= 5)
        cout << 1;
    else if (cnt >= 3)
        cout << 2;
    else if (cnt >= 1)
        cout << 3;
    else
        cout << -1;
    return 0;
}