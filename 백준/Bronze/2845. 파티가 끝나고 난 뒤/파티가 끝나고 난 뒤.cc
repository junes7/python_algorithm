#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int l, p;
    cin >> l >> p;
    vector<int> nums(5, 0);
    for (int i = 0; i < 5; i++) {
        cin >> nums[i];
        cout << nums[i] - l * p << ' ';
    }
    return 0;
}