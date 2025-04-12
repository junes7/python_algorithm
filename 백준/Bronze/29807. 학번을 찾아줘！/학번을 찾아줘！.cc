#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t, rlt = 0;
    cin >> t;
    vector<int> arr(5, 0);
    for (int i = 0; i < t; i++)
        cin >> arr[i];
    rlt += arr[0] > arr[2] ? (arr[0] - arr[2]) * 508 : (arr[2] - arr[0]) * 108;
    rlt += arr[1] > arr[3] ? (arr[1] - arr[3]) * 212 : (arr[3] - arr[1]) * 305;
    if (arr[4] > 0)
        rlt += arr[4] * 707;
    rlt *= 4763;
    cout << rlt;
    return 0;
}