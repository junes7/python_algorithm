#include <algorithm>
#include <iostream>
#include <map>
using namespace std;
int main(void) {
    int n, elem, maxn = 0;
    cin >> n;
    map<int, int> dic;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        if (dic.find(elem) == dic.end())
            dic[elem] = 1;
        else
            dic[elem] += 1;
        if (maxn < dic[elem])
            maxn = dic[elem];
    }
    cout << maxn;
    return 0;
}