#include <cstdlib>
#include <iostream>
using namespace std;
int compare(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int main(void) {
    int n, k, *arr;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    qsort(arr, n, sizeof(int), compare);
    cout << arr[k - 1];
    return 0;
}