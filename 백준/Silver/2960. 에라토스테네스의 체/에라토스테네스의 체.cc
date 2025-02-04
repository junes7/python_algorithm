#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, k;
    cin >> n >> k;
    vector<int> rem;
    for (int i = 2; i < n + 1; i++) {
        if (find(rem.begin(), rem.end(), i) == rem.end())
            rem.push_back(i);
        for (int j = i * 2; j < n + 1; j += i) {
            if (find(rem.begin(), rem.end(), j) == rem.end())
                rem.push_back(j);
        }
    }
    cout << rem[k - 1];
    return 0;
}