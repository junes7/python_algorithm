#include <iostream>
#include <set>
using namespace std;
int main(void) {
    int n, elem;
    cin >> n;
    set<int, less<int>> arr;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        arr.insert(elem);
    }
    set<int>::iterator it;
    for (it = arr.begin(); it != arr.end(); it++)
        cout << *it << ' ';
    return 0;
}