#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int cost, weight, idx = 0;
    double tcost, tweight, rlt = 0;
    vector<string> snacks = {"S", "N", "U"};
    for (int i = 0; i < 3; i++) {
        cin >> cost >> weight;
        tcost = cost * 10 >= 5000 ? cost * 10 - 500 : cost * 10, tweight = weight * 10;
        if ((double)tweight / tcost > rlt) {
            rlt = tweight / tcost;
            idx = i;
        }
    }
    cout << snacks[idx];
    return 0;
}