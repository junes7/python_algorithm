#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    vector<vector<int>> num = {{25, 0}, {10, 0}, {5, 0}, {1, 0}};
    int n, t;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        for (int j = 0; j < num.size(); j++) {
            num[j][1] = t / num[j][0];
            t %= num[j][0];
        }
        for (int j = 0; j < num.size(); j++) {
            cout << num[j][1] << ' ';
        }
        cout << endl;
    }
    return 0;
}