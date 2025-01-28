#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, cnt = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> bags = {5, 3};
    cin >> n;
    if (n > bags[0]) {
        while (n % bags[0]) {
            n -= bags[1];
            cnt += 1;
        }
    }
    if (n > 0) {
        for (int i = 0; i < bags.size(); i++) {
            cnt += n / bags[i];
            n %= bags[i];
        }
    }
    cout << (n != 0 ? -1 : cnt);
    return 0;
}