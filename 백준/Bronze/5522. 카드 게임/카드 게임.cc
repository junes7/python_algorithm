#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main(void) {
    vector<int> arr(5);
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    cout << accumulate(arr.begin(), arr.end(), 0);
    return 0;
}