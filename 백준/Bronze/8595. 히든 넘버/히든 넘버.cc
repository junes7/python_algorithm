#include <cctype>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    long cur_number = 0, total_sum = 0;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i]))
            cur_number = cur_number * 10 + (s[i] - 48);
        else {
            total_sum += cur_number;
            cur_number = 0;
        }
    }
    total_sum += cur_number;
    cout << total_sum;
    return 0;
}