#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    vector<long long> arr(3);
    for (int i = 0; i < 3; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), less<long long>());
    cout << arr[3 / 2];
    return 0;
}