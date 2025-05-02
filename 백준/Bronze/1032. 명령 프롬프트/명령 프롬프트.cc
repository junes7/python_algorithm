#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    string st;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    st = arr[0];
    for (int i = 0; i < st.size(); i++) {
        for (int j = 1; j < n; j++) {
            if (st[i] != arr[j][i])
                st[i] = '?';
        }
    }
    cout << st;
    return 0;
}