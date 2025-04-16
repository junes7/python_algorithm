#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int r, c, nz = 0, no = 0;
    cin >> r >> c;
    vector<string> arr(r);
    for (int i = 0; i < r; i++) {
        cin >> arr[i];
        for (int j = 0; j < c; j++) {
            if (arr[i][j] == '0')
                nz += 1;
            else
                no += 1;
        }
    }
    cout << (nz < no ? nz : no);
    return 0;
}