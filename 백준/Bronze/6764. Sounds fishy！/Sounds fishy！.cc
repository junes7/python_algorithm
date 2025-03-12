#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(void) {
    int r = 0;
    vector<int> arr(4);
    set<int> arr_set;
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
        arr_set.insert(arr[i]);
    }
    for (int i = 0; i < 3; i++) {
        if (arr[i] < arr[i + 1])
            r += 1;
        else if (arr[i] > arr[i + 1])
            r -= 1;
    }
    if (arr_set.size() == 1)
        cout << "Fish At Constant Depth";
    else if (r == 3)
        cout << "Fish Rising";
    else if (r == -3)
        cout << "Fish Diving";
    else
        cout << "No Fish";
    return 0;
}