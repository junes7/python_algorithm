#include <deque>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, elem, i = 1, j = 0;
    vector<int> num;
    deque<int> dq;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        num.push_back(elem);
    }
    while (i < n + 1) {
        if (j >= n)
            break;
        while (j < n - 1 && num[j] != i) {
            dq.push_back(num[j++]);
        }
        dq.push_back(num[j++]);
        while (dq.size() > 0) {
            if (dq.back() != i)
                break;
            else {
                dq.pop_back();
                i += 1;
            }
        }
    }
    cout << (dq.size() == 0 ? "Nice" : "Sad") << "\n";
    return 0;
}