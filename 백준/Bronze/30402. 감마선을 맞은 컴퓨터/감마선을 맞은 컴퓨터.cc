#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    vector<vector<char>> arr(15, vector<char>(15, 0));
    vector<int> total(3, 0);
    for (int i = 0; i < 15; i++)
        for (int j = 0; j < 15; j++)
            cin >> arr[i][j];
    for (int i = 0; i < 15; i++) {
        total[0] += count(arr[i].begin(), arr[i].end(), 'w');
        total[1] += count(arr[i].begin(), arr[i].end(), 'b');
        total[2] += count(arr[i].begin(), arr[i].end(), 'g');
    }
    if (total[0] > 0)
        cout << "chunbae";
    else if (total[1] > 0)
        cout << "nabi";
    else if (total[2] > 0)
        cout << "yeongcheol";
    return 0;
}