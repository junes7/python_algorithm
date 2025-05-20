#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, rlt;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    rlt = arr[n - 1];
    if (arr[2] - arr[1] == arr[1] - arr[0])
        rlt += arr[1] - arr[0];
    else if (arr[2] / arr[1] == arr[1] / arr[0])
        rlt *= arr[1] / arr[0];
    cout << rlt;
    return 0;
}