#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int sum_arr(string st) {
    int total = 0;
    for (int i = 0; i < st.size(); i++) {
        if (isdigit(st[i]))
            total += st[i] - 48;
    }
    return total;
}
int cmp(const string &s1, const string &s2) {
    if (s1.size() == s2.size() && sum_arr(s1) == sum_arr(s2)) return s1 < s2;
    if (s1.size() == s2.size()) return sum_arr(s1) < sum_arr(s2);
    return s1.size() < s2.size();
}
int main(void) {
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), cmp);
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\n";
    return 0;
}