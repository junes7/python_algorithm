#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int total_x, total_y;
    vector<int> arr(5);
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    total_x = arr[0] * arr[4];
    total_y = arr[1] + (arr[4] <= arr[2] ? 0 : (arr[4] - arr[2]) * arr[3]);
    cout << (total_x < total_y ? total_x : total_y);
    return 0;
}