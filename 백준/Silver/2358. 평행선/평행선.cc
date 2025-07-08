#include <iostream>
#include <map>
using namespace std;
int main(void) {
    int n, x, y, rlt = 0;
    cin >> n;
    map<int, int> dicx, dicy;
    map<int, int>::iterator iter;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if (dicx.find(x) == dicx.end())
            dicx[x] = 1;
        else
            dicx[x] += 1;
        if (dicy.find(y) == dicy.end())
            dicy[y] = 1;
        else
            dicy[y] += 1;
    }
    for (iter = dicx.begin(); iter != dicx.end(); iter++) {
        if (iter->second >= 2)
            rlt += 1;
    }
    for (iter = dicy.begin(); iter != dicy.end(); iter++) {
        if (iter->second >= 2)
            rlt += 1;
    }
    cout << rlt;
    return 0;
}