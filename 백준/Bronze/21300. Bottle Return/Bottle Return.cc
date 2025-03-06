#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main(void) {
    vector<int> arr(6);
    for (int i = 0; i < 6; i++)
        cin >> arr[i];
    cout << accumulate(arr.begin(), arr.end(), 0) * 5;
    return 0;
}