#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    string st;
    cin >> n;
    vector<long long> rlt(n);
    for (int i = 0; i < n; i++) {
        cin >> st;
        reverse(st.begin(), st.end());
        rlt[i] = stoll(st);
    }
    sort(rlt.begin(), rlt.end(), less<long long>());
    for (int i = 0; i < n; i++)
        cout << rlt[i] << "\n";
    return 0;
}