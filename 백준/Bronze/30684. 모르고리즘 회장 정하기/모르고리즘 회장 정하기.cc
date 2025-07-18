#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    string st;
    cin >> n;
    vector<string> arr;
    for (int i = 0; i < n; i++) {
        cin >> st;
        if (st.size() == 3) {
            arr.push_back(st);
        }
    }
    sort(arr.begin(), arr.end(), less<string>());
    cout << arr[0];
    return 0;
}