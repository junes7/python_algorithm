#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    long s, i = 1;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    while (s >= i)
        s -= i++;
    cout << i - 1;
    return 0;
}