#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, total;
    cin >> n;
    vector<int> arr(3);
    vector<vector<int>> score(3, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[j];
            score[j][i] = arr[j];
        }
    }
    for (int i = 0; i < n; i++) {
        total = 0;
        for (int j = 0; j < 3; j++) {
            if (count(score[j].begin(), score[j].end(), score[j][i]) == 1) {
                total += score[j][i];
            }
        }
        cout << total << "\n";
    }
    return 0;
}