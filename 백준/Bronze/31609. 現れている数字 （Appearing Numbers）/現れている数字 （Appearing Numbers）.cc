#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(void) {
    int n, elem;
    cin >> n;
    set<int> arr;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        arr.insert(elem);
    }
    vector<int> arr_sort(arr.begin(), arr.end());
    sort(arr_sort.begin(), arr_sort.end(), less<int>());
    for (int i = 0; i < arr_sort.size(); i++) {
        cout << arr_sort[i] << "\n";
    }
    return 0;
}