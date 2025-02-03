#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, left = 0, right = 0, sum_arr, cnt = 0;
    cin >> n;
    if (n == 1) {
        cout << 0;
        return 0;
    }
    vector<bool> prime;
    vector<int> arr;
    for (int i = 0; i < n + 1; i++) {
        prime.push_back(true);
    }
    prime[0] = false, prime[1] = false;
    for (int i = 2; i < n + 1; i++) {
        if (prime[i]) {
            arr.push_back(i);
            for (int j = i * 2; j < n + 1; j += i) {
                prime[j] = false;
            }
        }
    }
    sum_arr = arr[0];
    while (left <= right) {
        if (sum_arr <= n) {
            if (sum_arr == n)
                cnt += 1;
            right += 1;
            if (right == arr.size())
                break;
            sum_arr += arr[right];
        } else if (sum_arr > n) {
            sum_arr -= arr[left++];
        }
    }
    cout << cnt;
    return 0;
}