#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    double elem;
    vector<double> arr;
    cin >> elem;
    arr.push_back(elem);
    while (cin >> elem) {
        if (elem == 999) break;
        cout << fixed;
        cout.precision(2);
        cout << elem - arr[arr.size() - 1] << "\n";
        arr.push_back(elem);
    }
    return 0;
}