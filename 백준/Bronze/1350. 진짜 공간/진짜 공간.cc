#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, cls;
    long long rlt = 0;
    cin >> n;
    vector<int> files(n);
    for (int i = 0; i < n; i++)
        cin >> files[i];
    cin >> cls;
    for (int i = 0; i < n; i++)
        rlt += (files[i] / cls + (files[i] % cls == 0 ? 0 : 1)) * cls;
    cout << rlt;
    return 0;
}