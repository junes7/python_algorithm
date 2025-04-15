#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, p;
    cin >> n;
    cin >> p;
    vector<int> arr = {p};
    if (n >= 20) {
        arr.push_back(p * 0.75);
    }
    if (n >= 15) {
        arr.push_back(p - 2000 < 0 ? 0 : p - 2000);
    }
    if (n >= 10) {
        arr.push_back(p * 0.9);
    }
    if (n >= 5) {
        arr.push_back(p - 500 < 0 ? 0 : p - 500);
    }
    cout << *min_element(arr.begin(), arr.end());
    return 0;
}