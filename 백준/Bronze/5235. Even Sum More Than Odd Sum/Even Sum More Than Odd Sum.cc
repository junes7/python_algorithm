#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int k, n, elem;
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> n;
        vector<int> total(2);
        for (int j = 0; j < n; j++) {
            cin >> elem;
            total[elem % 2] += elem;
        }
        cout << (total[0] == total[1] ? "TIE" : (total[0] > total[1] ? "EVEN" : "ODD")) << "\n";
    }
    return 0;
}