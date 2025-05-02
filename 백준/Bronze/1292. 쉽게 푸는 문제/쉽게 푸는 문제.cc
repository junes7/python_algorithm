#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int a, b, total = 0;
    cin >> a >> b;
    vector<int> arr;
    for (int i = 1; i < 46; i++)
        for (int j = 0; j < i; j++)
            arr.push_back(i);
    for (int i = a - 1; i < b; i++)
        total += arr[i];
    cout << total;
    return 0;
}