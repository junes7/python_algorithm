#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    vector<int> arr(n), rank(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] >= 300)
            rank[i] = 1;
        else if (arr[i] >= 275)
            rank[i] = 2;
        else if (arr[i] >= 250)
            rank[i] = 3;
        else
            rank[i] = 4;
    }
    for (int i = 0; i < n; i++) {
        cout << rank[i] << ' ';
    }
    return 0;
}