#include <algorithm>
#include <iostream>
#include <map>
#include <set>
using namespace std;

int main(void) {
    int n, elem;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    map<int, int> num;
    set<int> el;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        el.insert(elem);
        if (num.find(elem) == num.end())
            num.insert(make_pair(elem, 1));
        else
            num[elem] += 1;
    }
    set<int>::iterator iter;
    for (iter = el.begin(); iter != el.end(); iter++) {
        for (int j = 0; j < num[*iter]; j++) {
            cout << *iter << "\n";
        }
    }
    return 0;
}