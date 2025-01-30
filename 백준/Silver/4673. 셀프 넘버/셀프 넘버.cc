#include <iostream>
#include <vector>
using namespace std;
int func_d(int num) {
    int r = num;
    while (num > 0) {
        r += num % 10;
        num /= 10;
    }
    return r;
}
int main(void) {
    vector<int> num;
    for (int i = 0; i < 10001; i++)
        num.push_back(1);
    for (int i = 1; i < 10001; i++)
        if (func_d(i) < 10001)
            num[func_d(i)] = 0;
    for (int i = 1; i < 10001; i++)
        if (num[i] == 1)
            cout << i << "\n";
    return 0;
}