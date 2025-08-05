#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
    string tar = "ILOVEYONSEI";
    char st;
    cin >> st;
    int rlt = abs(tar[0] - st);
    for (int i = 1; i < tar.size(); i++)
        rlt += abs(tar[i] - tar[i - 1]);
    cout << rlt;
    return 0;
}