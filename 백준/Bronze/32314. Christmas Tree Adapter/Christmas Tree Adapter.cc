#include <iostream>
using namespace std;
int main(void) {
    int A, W, V;
    cin >> A;
    cin >> W >> V;
    cout << (W / V >= A ? 1 : 0);
    return 0;
}