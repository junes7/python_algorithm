#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    vector<int> arr(4);
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    if ((arr[0] == 8 || arr[0] == 9) && (arr[3] == 8 || arr[3] == 9)) {
        cout << (arr[1] == arr[2] ? "ignore" : "answer");
    } else {
        cout << "answer";
    }
    return 0;
}