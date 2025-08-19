#include <iostream>
#include <map>
using namespace std;
int main(void) {
    int n, minn = 1000;
    string st;
    map<char, int> dic = {{'B', 0}, {'R', 0}, {'O', 0}, {'N', 0}, {'Z', 0}, {'S', 0}, {'I', 0}, {'L', 0}, {'V', 0}, {'E', 0}};
    cin >> n >> st;
    for (int i = 0; i < n; i++) {
        if (dic.find(st[i]) != dic.end()) {
            dic[st[i]] += 1;
        }
    }
    dic['E'] /= 2, dic['R'] /= 2;
    map<char, int>::iterator iter;
    for (iter = dic.begin(); iter != dic.end(); iter++) {
        if (minn > iter->second)
            minn = iter->second;
    }
    cout << (minn == 1000 ? 0 : minn);
    return 0;
}