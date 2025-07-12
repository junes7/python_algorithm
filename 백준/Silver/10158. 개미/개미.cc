#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t;
    vector<int> lng(2), quo(2), mark(2), rlt(2);
    for (int i = 0; i < 2; i++)
        cin >> lng[i];
    for (int i = 0; i < 2; i++)
        cin >> mark[i];
    cin >> t;
    for (int i = 0; i < 2; i++) {
        if ((mark[i] + t) / lng[i] % 2 == 0)
            rlt[i] = (mark[i] + t) % lng[i];
        else
            rlt[i] = lng[i] - (mark[i] + t) % lng[i];
    }
    for (int i = 0; i < 2; i++)
        cout << rlt[i] << ' ';
    return 0;
}