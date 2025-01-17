#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main(void) {
    int angle;
    vector<int> num;
    for (int i = 0; i < 3; i++) {
        cin >> angle;
        num.push_back(angle);
    }
    sort(num.begin(), num.end(), less<int>());
    if (accumulate(num.begin(), num.end(), 0) == 180) {
        if (num[0] == 60)
            cout << "Equilateral";
        else
            cout << (num[0] == num[1] or num[1] == num[2] ? "Isosceles" : "Scalene");
    } else {
        cout << "Error";
    }
    return 0;
}