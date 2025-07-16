#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
bool cmp(const pair<int, char> &a, const pair<int, char> &b) {
    return a.first > b.first;
}
int main(void) {
    string name, abbrev = "";
    vector<int> yr(3);
    vector<pair<int, char>> arr(3);
    for (int i = 0; i < 3; i++) {
        cin >> arr[i].first >> yr[i] >> name;
        yr[i] = yr[i] % 100;
        arr[i].second = name[0];
    }
    sort(yr.begin(), yr.end(), less<int>());
    sort(arr.begin(), arr.end(), cmp);
    name = "";
    for (int i = 0; i < 3; i++) {
        abbrev += to_string(yr[i]);
        name += arr[i].second;
    }
    cout << abbrev << "\n";
    cout << name;
    return 0;
}