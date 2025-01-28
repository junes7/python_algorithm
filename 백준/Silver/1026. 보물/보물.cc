#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, elem, s = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    vector<int> alist, blist;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        alist.push_back(elem);
    }
    for (int i = 0; i < n; i++) {
        cin >> elem;
        blist.push_back(elem);
    }
    sort(alist.begin(), alist.end(), less<int>());
    sort(blist.begin(), blist.end(), greater<int>());
    for (int i = 0; i < n; i++) {
        s += alist[i] * blist[i];
    }
    cout << s;
    return 0;
}