#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    string st;
    cin >> st;
    int tmp, t;
    vector<int> arr = {1, 0, 0};
    for (int i = 0; i < st.size(); i++) {
        t = st[i] - 65;
        tmp = arr[t];
        arr[t] = arr[t > 1 ? t % 2 : t + 1];
        arr[t > 1 ? t % 2 : t + 1] = tmp;
    }
    cout << find(arr.begin(), arr.end(), 1) - arr.begin() + 1;
    return 0;
}