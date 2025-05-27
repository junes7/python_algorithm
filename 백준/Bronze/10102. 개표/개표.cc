#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    vector<int> t(2, 0);
    string st;
    cin >> n;
    cin >> st;
    for (int i = 0; i < n; i++)
        if (st[i] == 'A')
            t[0] += 1;
        else
            t[1] += 1;
    cout << (t[0] == t[1] ? "Tie" : (t[0] > t[1] ? "A" : "B"));
    return 0;
}