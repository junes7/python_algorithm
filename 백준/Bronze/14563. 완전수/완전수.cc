#include <iostream>
using namespace std;
int main(void) {
    int n, pri_num, elem;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        pri_num = elem == 1 ? 0 : 1;
        for (int j = 2; j < elem; j++) {
            if (elem % j == 0)
                pri_num += j;
        }
        cout << (pri_num == elem ? "Perfect" : (pri_num < elem ? "Deficient" : "Abundant")) << "\n";
    }
    return 0;
}