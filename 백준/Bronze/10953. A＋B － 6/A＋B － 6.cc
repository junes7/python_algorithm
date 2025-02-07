#include <iostream>
#include <numeric>
#include <sstream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    string t;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        cin >> t;
        arr = {};
        stringstream ss(t);
        while (getline(ss, t, ',')) {
            arr.push_back(stoi(t));
        }
        cout << accumulate(arr.begin(), arr.end(), 0) << "\n";
    }
    return 0;
}