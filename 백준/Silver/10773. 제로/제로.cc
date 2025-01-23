#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main(void) {
    int n, num;
    vector<int> stack;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num == 0)
            stack.pop_back();
        else
            stack.push_back(num);
    }
    cout << accumulate(stack.begin(), stack.end(), 0);
    return 0;
}