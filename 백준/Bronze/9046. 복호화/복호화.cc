#include <algorithm>
#include <cctype>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
bool cmp(const pair<char, int> &a, const pair<char, int> &b) {
    return a.second > b.second;
}
int main(void) {
    int n;
    string st;
    map<char, int> dic;
    cin >> n;
    getline(cin, st);
    for (int i = 0; i < n; i++) {
        getline(cin, st);
        dic.clear();
        for (int j = 0; j < st.size(); j++) {
            if (isalpha(st[j])) {
                if (dic.find(st[j]) != dic.end()) {
                    dic[st[j]] += 1;
                } else {
                    dic[st[j]] = 1;
                }
            }
        }
        vector<pair<char, int>> dic_sort(dic.begin(), dic.end());
        sort(dic_sort.begin(), dic_sort.end(), cmp);
        if (dic_sort.size() > 1 && dic_sort[0].second == dic_sort[1].second)
            cout << "?" << "\n";
        else
            cout << dic_sort[0].first << "\n";
    }
    return 0;
}