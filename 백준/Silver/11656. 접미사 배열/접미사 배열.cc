#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int len;
    string st, t;
    cin >> st;
    len = st.size();
    vector<string> arr(len);
    for (int i = len - 1; i >= 0; i--) {
        t = "";
        for (int j = i; j < len; j++)
            t += st[j];
        arr[len - 1 - i] = t;
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < len; i++)
        cout << arr[i] << "\n";
    return 0;
}