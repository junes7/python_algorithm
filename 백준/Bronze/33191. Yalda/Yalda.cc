#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(void) {
    int b, t = 0;
    bool flag;
    vector<int> obj(3);
    map<int, string> pref = {{1, "Watermelon"}, {2, "Pomegranates"}, {3, "Nuts"}};
    cin >> b;
    for (int i = 0; i < 3; i++) {
        cin >> obj[i];
        if (obj[i] > b) continue;
        t = i + 1;
        break;
    }
    cout << (pref[t] != "" ? pref[t] : "Nothing") << "\n";
    return 0;
}