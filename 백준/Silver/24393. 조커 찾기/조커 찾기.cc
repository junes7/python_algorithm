#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main(void) {
    int n, elem, next, left_sum, right_sum, joker = 1;
    string st;
    vector<int> A;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline(cin, st);
    n = stoi(st);
    for (int i = 0; i < n; i++) {
        A = {}, next = 0;
        getline(cin, st);
        stringstream ss(st);
        while (ss >> elem)
            A.push_back(elem);
        if (joker <= 13) {
            left_sum = 0;
            for (int j = 0; j < A.size(); j++) {
                if (j % 2 == 0) {
                    next += A[j];
                } else {
                    if (left_sum + A[j] >= joker) {
                        next += joker - left_sum;
                        break;
                    } else {
                        next += A[j];
                        left_sum += A[j];
                    }
                }
            }
        } else {
            joker -= 13;
            right_sum = 0;
            for (int j = 0; j < A.size(); j++) {
                if (j % 2 == 1) {
                    next += A[j];
                } else {
                    if (right_sum + A[j] >= joker) {
                        next += joker - right_sum;
                        break;
                    } else {
                        next += A[j];
                        right_sum += A[j];
                    }
                }
            }
        }
        joker = next;
    }
    cout << joker;
    return 0;
}