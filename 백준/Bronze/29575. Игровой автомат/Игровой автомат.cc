#include <iostream>
#include <map>
using namespace std;
int main(void) {
    int n, ci, wi, m, elem, total = 0;
    cin >> n;
    map<int, int> arr;
    for (int i = 0; i < n; i++) {
        cin >> ci >> wi;
        arr[ci] = wi;
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> elem;
        total += -10 + arr[elem];
    }
    cout << total;
    return 0;
}