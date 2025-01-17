#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main(void) {
    int elem;
    vector<int> num;
    while (1) {
        num = {};
        for (int i = 0; i < 3; i++) {
            cin >> elem;
            num.push_back(elem);
        }
        if (accumulate(num.begin(), num.end(), 0) == 0)
            break;
        else {
            sort(num.begin(), num.end(), less<int>());
            if (num[num.size() - 1] >= num[0] + num[1])
                cout << "Invalid";
            else {
                if (num[0] == num[2])
                    cout << "Equilateral";
                else
                    cout << (num[0] == num[1] || num[1] == num[2] ? "Isosceles" : "Scalene");
            }
            cout << endl;
        }
    }
    return 0;
}