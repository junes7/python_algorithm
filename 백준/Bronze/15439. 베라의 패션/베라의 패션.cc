#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    vector<pair<int, int>> permu;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j)
                permu.push_back(make_pair(i, j));
        }
    }
    cout << permu.size();
    return 0;
}