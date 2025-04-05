#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int cmd, rlt = 0;
    vector<char> dir = {'N', 'E', 'S', 'W'};
    for (int i = 0; i < 10; i++) {
        cin >> cmd;
        rlt = (rlt + cmd) % 4;
    }
    cout << dir[rlt];
    return 0;
}