#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int total = 0;
    string st1, st2;
    cin >> st1;
    cin >> st2;
    vector<int> a(26, 0), b(26, 0);
    for (int i = 0; i < st1.size(); i++)
        a[st1[i] - 97] += 1;
    for (int i = 0; i < st2.size(); i++)
        b[st2[i] - 97] += 1;
    for (int i = 0; i < 26; i++)
        total += abs(a[i] - b[i]);
    cout << total;
    return 0;
}