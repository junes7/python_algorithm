#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int a, b;
    cin >> a >> b;
    vector<int> arr = {a + b, a - b};
    sort(arr.begin(), arr.end(), greater<int>());
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << "\n";
    }
    return 0;
}