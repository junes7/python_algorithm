#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main(void) {
    int n, m, total = 0;
    cin >> n >> m;
    vector<int> box(n), book(m);
    for (int i = 0; i < n; i++)
        cin >> box[i];
    for (int i = 0; i < m; i++)
        cin >> book[i];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (book[i] > box[j]) continue;
            box[j] -= book[i];
            break;
        }
    }
    cout << accumulate(box.begin(), box.end(), 0);
    return 0;
}