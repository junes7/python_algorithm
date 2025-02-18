#include <iostream>
#include <vector>
using namespace std;
void generate_lottos(vector<int> &numbers, vector<int> &selected, int start, int target) {
    if (selected.size() == target) {
        for (int i = 0; i < selected.size(); i++)
            cout << selected[i] << ' ';
        cout << "\n";
        return;
    }
    for (int i = start; i < numbers.size(); i++) {
        selected.push_back(numbers[i]);
        generate_lottos(numbers, selected, i + 1, target);
        selected.pop_back();
    }
}
int main(void) {
    int k;
    while (true) {
        cin >> k;
        if (k == 0) break;
        vector<int> selected, numbers(k);
        for (int i = 0; i < k; i++)
            cin >> numbers[i];
        generate_lottos(numbers, selected, 0, 6);
        cout << "\n";
    }
    return 0;
}