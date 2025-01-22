#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

int main(void) {
    int n, elem;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    map<int, int> num;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        if (num.find(elem) == num.end())
            num.insert(make_pair(elem, 1));
        else
            num[elem] += 1;
    }
    map<int, int>::iterator iter;
    for (iter = num.begin(); iter != num.end(); iter++)
        for (int j = 0; j < iter->second; j++)
            cout << iter->first << "\n";
    return 0;
}