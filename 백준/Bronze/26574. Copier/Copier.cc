#include <iostream>
using namespace std;
int main(void) {
    int n, elem;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        cout << elem << ' ' << elem << "\n";
    }
    return 0;
}