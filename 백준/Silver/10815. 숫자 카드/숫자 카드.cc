#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, m, elem, start, end, mid;
    vector<int> numList, targetList;
    bool flag;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        numList.push_back(elem);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> elem;
        targetList.push_back(elem);
    }
    sort(numList.begin(), numList.end(), less<int>());
    for (int i = 0; i < m; i++) {
        flag = false;
        start = 0, end = numList.size() - 1;
        while (start <= end) {
            mid = (start + end) / 2;
            if (numList[mid] == targetList[i]) {
                flag = true;
                break;
            } else if (numList[mid] > targetList[i]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        cout << (flag ? 1 : 0) << ' ';
    }
    return 0;
}