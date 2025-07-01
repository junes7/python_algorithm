#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, l;
    cin >> n >> l;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), less<int>());
    for (int i = 0; i < n; i++)
        if (arr[i] <= l)
            l += 1;
        else
            break;
    cout << l;
    return 0;
}