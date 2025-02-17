#include <iostream>
#include <vector>
using namespace std;
void backtrack(vector<int> &current, vector<int> &numbers, vector<bool> &used, int n) {
    if (current.size() == n) {
        for (int i = 0; i < current.size(); i++) {
            cout << current[i] << ' ';
        }
        cout << "\n";
        return;
    }
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            used[i] = true;
            current.push_back(numbers[i]);
            backtrack(current, numbers, used, n);
            current.pop_back();
            used[i] = false;
        }
    }
}
void generate_permutations(int n) {
    vector<int> numbers(n), current;
    for (int i = 1; i < n + 1; i++)
        numbers[i - 1] = i;
    vector<bool> used(n, false);
    backtrack(current, numbers, used, n);
}
int main(void) {
    int n;
    cin >> n;
    generate_permutations(n);
    return 0;
}