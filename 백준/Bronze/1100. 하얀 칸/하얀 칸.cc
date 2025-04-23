#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int cnt = 0;
    vector<string> arr(8);
    for (int i = 0; i < 8; i++)
        cin >> arr[i];
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i % 2 == 0 && j % 2 == 0 && arr[i][j] == 'F')
                cnt += 1;
            else if (i % 2 != 0 && j % 2 != 0 && arr[i][j] == 'F')
                cnt += 1;
        }
    }
    cout << cnt;
    return 0;
}