#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(void) {
    int n, elem;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    map<int, int> numDic;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        numDic[elem] = numDic.find(elem) == numDic.end() ? 1 : numDic[elem] + 1;
    }
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        cout << (numDic.find(elem) == numDic.end() ? 0 : numDic[elem]) << ' ';
    }
    return 0;
}