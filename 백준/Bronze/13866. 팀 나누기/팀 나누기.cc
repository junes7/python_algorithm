#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    vector<int> arr(4);
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    cout << abs((arr[3] + arr[0]) - (arr[1] + arr[2]));
    return 0;
}