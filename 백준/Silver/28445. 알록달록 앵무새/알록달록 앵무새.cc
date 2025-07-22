#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(void) {
    vector<string> tmp(2);
    set<string> arr;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> tmp[j];
            arr.insert(tmp[j]);
        }
    }
    vector<string> arr_sort(arr.begin(), arr.end());
    sort(arr_sort.begin(), arr_sort.end(), less<string>());
    for (int i = 0; i < arr_sort.size(); i++) {
        for (int j = 0; j < arr_sort.size(); j++) {
            cout << arr_sort[i] << ' ' << arr_sort[j] << "\n";
        }
    }
    return 0;
}