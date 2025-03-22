#include <iostream>
#include <map>
using namespace std;
int main(void) {
    int n, w, h, s = 0;
    map<int, int> width = {{136, 1000}, {142, 5000}, {148, 10000}, {154, 50000}};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> w >> h;
        s += width[w];
    }
    cout << s;
    return 0;
}