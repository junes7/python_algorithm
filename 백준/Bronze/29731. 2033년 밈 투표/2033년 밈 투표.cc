#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    string st;
    bool flag = false;
    cin >> n;
    getline(cin, st);
    vector<string> arr = {"Never gonna give you up", "Never gonna let you down", "Never gonna run around and desert you", "Never gonna make you cry", "Never gonna say goodbye", "Never gonna tell a lie and hurt you", "Never gonna stop"};
    for (int i = 0; i < n; i++) {
        getline(cin, st);
        if (find(arr.begin(), arr.end(), st) == arr.end()) {
            flag = true;
            break;
        }
    }
    cout << (flag ? "Yes" : "No");
    return 0;
}