#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int l, n;
    cin >> l;
    vector<int> nums(l), ran(2, 0);
    for (int i = 0; i < l; i++)
        cin >> nums[i];
    cin >> n;
    if (find(nums.begin(), nums.end(), n) != nums.end()) {
        cout << 0;
        return 0;
    }
    sort(nums.begin(), nums.end(), less<int>());
    for (int i = 0; i < l; i++) {
        if (nums[i] < n)
            ran[0] = nums[i];
        else if (nums[i] > n && ran[1] == 0)
            ran[1] = nums[i];
    }
    ran[0] += 1;
    ran[1] -= 1;
    cout << (n - ran[0]) * (ran[1] - n + 1) + (ran[1] - n);
    return 0;
}