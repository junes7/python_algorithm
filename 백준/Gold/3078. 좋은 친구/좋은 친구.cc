#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, k;
    long cnt = 0;
    string t;
    vector<int> name, len_name;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> t;
        name.push_back(t.size());
    }
    for (int i = 0; i < 21; i++) {
        len_name.push_back(0);
    }
    for (int i = 0; i < n; i++) {
        if (k < i)
            len_name[name[i - k - 1]] -= 1;
        cnt += len_name[name[i]];
        len_name[name[i]] += 1;
    }
    cout << cnt;
    return 0;
}