#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    vector<int> arr(n), accum;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    accum.push_back(arr[0]);
    for (int i = 1; i < n; i++)
        accum.push_back(arr[i] == 0 ? 0 : accum[accum.size() - 1] + 1);
    cout << accumulate(accum.begin(), accum.end(), 0);
    return 0;
}