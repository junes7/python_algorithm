#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
string zfill(string s, int len) {
    return string(len - s.size(), '0') + s;
}
int main(void) {
    int idx = 0, tot1, tot2, rlt;
    string st1, st2;
    vector<int> t1(3), t2(3);
    cin >> st1;
    stringstream ss1(st1);
    while (getline(ss1, st1, ':')) {
        t1[idx++] = stoi(st1);
    }
    cin >> st2;
    idx = 0;
    stringstream ss2(st2);
    while (getline(ss2, st2, ':')) {
        t2[idx++] = stoi(st2);
    }
    tot1 = t1[0] * 3600 + t1[1] * 60 + t1[2];
    tot2 = t2[0] * 3600 + t2[1] * 60 + t2[2];
    if (tot1 >= tot2) tot2 += 24 * 60 * 60;
    rlt = tot2 - tot1;
    cout << zfill(to_string(rlt / 3600), 2) << ":" << zfill(to_string((rlt % 3600) / 60), 2) << ":" << zfill(to_string(rlt % 60), 2);
    return 0;
}