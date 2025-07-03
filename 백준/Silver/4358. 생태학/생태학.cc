#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
bool cmp(pair<string, double> &a, pair<string, double> &b) {
    return a.first < b.first;
}
int main(void) {
    int cnt = 0;
    string st;
    map<string, double> dic;
    while (getline(cin, st)) {
        cnt += 1;
        if (dic.find(st) != dic.end())
            dic[st] += 1;
        else
            dic[st] = 1;
    }
    vector<pair<string, double>> dic_sort(dic.begin(), dic.end());
    sort(dic_sort.begin(), dic_sort.end(), cmp);
    cout << fixed;
    cout.precision(4);
    for (int i = 0; i < dic_sort.size(); i++)
        cout << dic_sort[i].first << ' ' << (dic_sort[i].second / cnt * 100.0) << "\n";
    return 0;
}