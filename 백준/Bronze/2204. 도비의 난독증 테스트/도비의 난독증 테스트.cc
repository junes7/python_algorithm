#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
bool cmp(string &a, string &b) {
    string st1 = a, st2 = b;
    for (int i = 0; i < st1.size(); i++) {
        if (isupper(st1[i]))
            st1[i] = tolower(st1[i]);
    }
    for (int i = 0; i < st2.size(); i++) {
        if (isupper(st2[i]))
            st2[i] = tolower(st2[i]);
    }
    return st1 < st2;
}
int main(void) {
    int t;
    while (1) {
        cin >> t;
        if (t == 0) break;
        vector<string> arr(t);
        for (int i = 0; i < t; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end(), cmp);
        cout << arr[0] << "\n";
    }
    return 0;
}