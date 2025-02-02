#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, d, k, c, sushi, eat_sushi, max_sushi, start, end;
    cin >> n >> d >> k >> c;
    vector<int> arr, check;
    for (int i = 0; i < n; i++) {
        cin >> sushi;
        arr.push_back(sushi);
    }
    for (int i = 0; i < d+1; i++) {
        check.push_back(0);
    }
    check[c] = 1;
    eat_sushi = 1;
    for (int i = 0; i < k; i++) {
        sushi = arr[i % n];
        if (!check[sushi])
            eat_sushi += 1;
        check[sushi] += 1;
    }
    max_sushi = eat_sushi;
    for (int i = 0; i < n; i++) {
        start = arr[i % n];
        end = arr[(i + k) % n];
        check[start] -= 1;
        if (!check[start])
            eat_sushi -= 1;
        if (!check[end])
            eat_sushi += 1;
        check[end] += 1;
        max_sushi = max(max_sushi, eat_sushi);
    }
    cout << max_sushi;
    return 0;
}