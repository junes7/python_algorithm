#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
    int n, cntd = 0, cntp = 0;
    char elem;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        if (elem == 'D')
            cntd += 1;
        else
            cntp += 1;
        if (abs(cntd - cntp) == 2) break;
    }
    cout << cntd << ":" << cntp;
    return 0;
}