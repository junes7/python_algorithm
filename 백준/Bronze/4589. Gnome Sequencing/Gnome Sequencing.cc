#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    vector<int> arr(3), arr_sort(3), arr_sort_rev(3);
    cout << "Gnomes:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[j];
            arr_sort[j] = arr[j];
            arr_sort_rev[j] = arr[j];
        }
        sort(arr_sort.begin(), arr_sort.end(), less<int>());
        sort(arr_sort_rev.begin(), arr_sort_rev.end(), greater<int>());
        cout << (arr == arr_sort || arr == arr_sort_rev ? "Ordered" : "Unordered") << "\n";
    }
    return 0;
}