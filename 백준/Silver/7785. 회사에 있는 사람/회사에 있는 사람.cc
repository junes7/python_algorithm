#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main(void) {
    int n;
    string name, state;
    cin >> n;
    map<string, int> nameList;
    for (int i = 0; i < n; i++) {
        cin >> name >> state;
        if (state == "enter") {
            nameList.insert({name, 1});
        } else {
            nameList.erase(name);
        }
    }
    vector<pair<string, int>> vnameList(nameList.begin(), nameList.end());
    sort(vnameList.begin(), vnameList.end(), [](pair<string, int> a, pair<string, int> b) {
        return a.first > b.first;
    });
    for (int i = 0; i < vnameList.size(); i++) {
        cout << vnameList[i].first << "\n";
    }
    return 0;
}