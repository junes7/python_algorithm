#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t, wizardt, oakt, scr1[6] = {1, 2, 3, 3, 4, 10}, scr2[7] = {1, 2, 2, 2, 3, 5, 10};
    cin >> t;
    vector<int> arr1(6), arr2(7);
    for (int i = 1; i < t + 1; i++) {
        wizardt = 0, oakt = 0;
        for (int j = 0; j < 6; j++) {
            cin >> arr1[j];
            wizardt += arr1[j] * scr1[j];
        }
        for (int j = 0; j < 7; j++) {
            cin >> arr2[j];
            oakt += arr2[j] * scr2[j];
        }
        cout << "Battle " << i << ": " << (wizardt == oakt ? "No victor on this battle field" : (wizardt < oakt ? "Evil eradicates all trace of Good" : "Good triumphs over Evil")) << "\n";
    }
    return 0;
}