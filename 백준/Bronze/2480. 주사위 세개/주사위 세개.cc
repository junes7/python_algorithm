#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(void) {
    int elem, cnt;
    vector<int> t;
    map<int, int> dic;
    for (int i = 0; i < 3; i++) {
        cin >> elem;
        t.push_back(elem);
    }
    for (int i = 0; i < 3; i++) {
        if (dic.find(t[i]) == dic.end()) {
            dic[t[i]] = 1;
        } else {
            dic[t[i]] += 1;
        }
    }
    map<int, int>::iterator it;
    for (it = dic.begin(); it != dic.end(); it++) {
        if (it->second == 4 - dic.size()) {
            cnt = it->first;
            break;
        }
    }
    if (dic.size() == 1) {
        cout << 10000 + cnt * 1000 << endl;
    } else if (dic.size() == 2) {
        cout << 1000 + cnt * 100 << endl;
    } else {
        cout << *max_element(t.begin(), t.end()) * 100 << endl;
    }
    return 0;
}