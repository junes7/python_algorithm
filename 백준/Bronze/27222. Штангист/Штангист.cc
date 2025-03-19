#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, s = 0, x, y;
    cin >> n;
    vector<int> isTrain(n);
    for (int i = 0; i < n; i++)
        cin >> isTrain[i];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        if (isTrain[i])
            s += y > x ? y - x : 0;
        else
            s += 0;
    }
    cout << s;
    return 0;
}