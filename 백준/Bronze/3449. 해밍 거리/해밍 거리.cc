#include <iostream>
using namespace std;
int main(void) {
    int t, cnt;
    string x, y;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> x;
        cin >> y;
        cnt = 0;
        for (int j = 0; j < x.size(); j++) {
            if (x[j] != y[j])
                cnt += 1;
        }
        cout << "Hamming distance is " << cnt << ".\n";
    }
    return 0;
}