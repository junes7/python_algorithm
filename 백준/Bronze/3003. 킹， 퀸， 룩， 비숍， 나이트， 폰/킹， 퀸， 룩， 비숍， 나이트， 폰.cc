#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int elem;
    vector<int> pieces = {1, 1, 2, 2, 2, 8};
    for (int i = 0; i < 6; i++) {
        cin >> elem;
        pieces[i] -= elem;
        cout << pieces[i] << ' ';
    }
    return 0;
}