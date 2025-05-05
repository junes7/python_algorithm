#include <algorithm>
#include <iostream>
using namespace std;
int main(void) {
    string x, y, r;
    cin >> x >> y;
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());
    r = to_string(stoi(x) + stoi(y));
    reverse(r.begin(), r.end());
    cout << stoi(r);
    return 0;
}