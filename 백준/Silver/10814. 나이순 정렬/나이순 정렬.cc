#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
    int n, age;
    string t;
    vector<pair<int, string>> ageList;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> age >> t;
        ageList.push_back(make_pair(age, t));
    }
    stable_sort(ageList.begin(), ageList.end(), [](pair<int, string> a, pair<int, string> b) {
        return a.first < b.first;
    });
    for (int i = 0; i < n; i++)
        cout << ageList[i].first << ' ' << ageList[i].second << endl;
    return 0;
}