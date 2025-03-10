#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, cnt = 0;
    string st;
    vector<char> vowels = {'a', 'i', 'u', 'e', 'o'};
    cin >> n;
    cin >> st;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            if (st[i] == vowels[j]) {
                cnt += 1;
                break;
            }
        }
    }
    cout << cnt;
    return 0;
}