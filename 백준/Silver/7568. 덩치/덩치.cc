#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, rank;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(2, 0));
    for (int i = 0; i < n; i++)
        cin >> arr[i][0] >> arr[i][1];
    for (int i = 0; i < n; i++) {
        rank = 1;
        for (int j = 0; j < n; j++) {
            if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
                rank += 1;
        }
        cout << rank << " ";
    }
    return 0;
}