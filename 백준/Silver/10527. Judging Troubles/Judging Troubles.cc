#include <iostream>
#include <map>
using namespace std;
int main(void) {
    int n, rlt = 0;
    cin >> n;
    string st;
    map<string, int> dic1, dic2;
    map<string, int>::iterator iter;
    for (int i = 0; i < n; i++) {
        cin >> st;
        if (dic1.find(st) == dic1.end())
            dic1[st] = 1;
        else
            dic1[st] += 1;
    }
    for (int i = 0; i < n; i++) {
        cin >> st;
        if (dic2.find(st) == dic2.end())
            dic2[st] = 1;
        else
            dic2[st] += 1;
    }
    for (iter = dic1.begin(); iter != dic1.end(); iter++) {
        if (dic2.find(iter->first) != dic2.end()) {
            rlt += min(dic1[iter->first], dic2[iter->first]);
        }
    }
    cout << rlt;
    return 0;
}