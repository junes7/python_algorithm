#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(void) {
    vector<vector<int>> yun(3, vector<int>(4, 0));
    vector<int> yun_list(3, 0);
    map<int, char> dic = {{3, 'A'}, {2, 'B'}, {1, 'C'}, {0, 'D'}, {4, 'E'}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> yun[i][j];
            yun_list[i] += yun[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
        cout << dic[yun_list[i]] << "\n";
    return 0;
}