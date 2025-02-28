#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    bool flagasc, flagdes;
    vector<int> arr(8), arr_copy(8), arr_copy_rev(8);
    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
        arr_copy[i] = arr[i];
        arr_copy_rev[i] = arr[i];
    }
    sort(arr_copy.begin(), arr_copy.end(), less<int>());
    sort(arr_copy_rev.begin(), arr_copy_rev.end(), greater<int>());
    flagasc = true, flagdes = true;
    for (int i = 0; i < 8; i++) {
        if (arr[i] != arr_copy[i])
            flagasc = false;
        if (arr[i] != arr_copy_rev[i])
            flagdes = false;
    }
    cout << (flagasc ? "ascending" : (flagdes ? "descending" : "mixed"));
    return 0;
}