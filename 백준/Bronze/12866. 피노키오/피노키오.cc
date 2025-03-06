#include <iostream>
#include <map>
using namespace std;
int main(void) {
    int n, r = 1, mod = 1000000007;
    string st;
    map<char, long long> dict = {{'A', 0}, {'C', 0}, {'G', 0}, {'T', 0}};
    cin >> n;
    cin >> st;
    for (int i = 0; i < n; i++)
        dict[st[i]] += 1;
    map<char, long long>::iterator iter;
    for (iter = dict.begin(); iter != dict.end(); iter++)
        r = (r * iter->second % mod);
    cout << r;
    return 0;
}