#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    string n;
    int rlt;
    vector<string> arr = {"Fizz", "Buzz", "FizzBuzz"};
    for (int i = 3; i >= 0; i--) {
        cin >> n;
        if (find(arr.begin(), arr.end(), n) == arr.end()) {
            rlt = stoi(n) + i;
            break;
        }
    }
    if (rlt % 3 == 0 && rlt % 5 == 0) {
        cout << "FizzBuzz" << "\n";
    } else {
        if (rlt % 3 == 0)
            cout << "Fizz" << "\n";
        else if (rlt % 5 == 0)
            cout << "Buzz" << "\n";
        else
            cout << rlt << "\n";
    }
    return 0;
}