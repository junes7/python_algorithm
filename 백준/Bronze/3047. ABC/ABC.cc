#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    vector<int> arr(3);
    string st;
    for (int i = 0; i < 3; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), less<int>());
    cin >> st;
    for (int i = 0; i < st.size(); i++)
        cout << arr[st[i] - 65] << ' ';
    return 0;
}