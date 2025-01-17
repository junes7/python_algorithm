#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int st, end, j;
    cin >> st >> end;
    vector<bool> arr;
    if (st == 1) st += 1;
    for (int i = 0; i < end + 1; i++) {
        arr.push_back(true);
    }
    for (int i = 2; i < int(sqrt(end)) + 1; i++) {
        if (arr[i] == true) {
            j = 2;
            while (i * j <= end) {
                arr[i * j] = false;
                j += 1;
            }
        }
    }
    for (int i = st; i < end + 1; i++) {
        if (arr[i] == true)
            cout << i << endl;
    }
    return 0;
}