#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    vector<string> arr(n + 1, "");
    arr[0] = "int a;";
    for (int i = 1; i < n + 1; i++) {
        arr[i] += "int ";
        for (int j = 0; j < i; j++)
            arr[i] += "*";
        if (i == 1)
            arr[i] += "ptr = &a;";
        else
            arr[i] += "ptr" + to_string(i) + " = &ptr" + (i - 1 > 1 ? to_string(i - 1) : "") + ";";
    }
    for (int i = 0; i < n + 1; i++)
        cout << arr[i] << "\n";
    return 0;
}