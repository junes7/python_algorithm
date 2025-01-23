#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

int main(void) {
    int n, elem, cnt = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    vector<int> pt;
    set<int> ptset;
    map<int, int> ptdic;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        pt.push_back(elem);
        ptset.insert(elem);
    }
    set<int>::iterator iter;
    for (iter = ptset.begin(); iter != ptset.end(); iter++)
        ptdic[*iter] = cnt++;
    for (int i = 0; i < n; i++)
        cout << ptdic[pt[i]] << ' ';
    return 0;
}