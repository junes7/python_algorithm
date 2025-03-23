#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    vector<string> arr = {"ITMO", "SPbSU", "SPbSU", "ITMO", "ITMO",
                          "SPbSU", "ITMO", "ITMO", "ITMO", "ITMO",
                          "ITMO", "PetrSU, ITMO", "SPbSU", "SPbSU",
                          "ITMO", "ITMO", "ITMO", "ITMO", "SPbSU",
                          "ITMO", "ITMO", "ITMO", "ITMO", "SPbSU", "ITMO"};
    int n;
    cin >> n;
    cout << arr[n - 1995];
    return 0;
}