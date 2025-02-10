#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int min_range_sensors(int n, int k, vector<int> &sensors) {
    int result;
    vector<int> distances(n - 1);
    for (int i = 1; i < n; i++)
        distances[i - 1] = sensors[i] - sensors[i - 1];
    sort(distances.begin(), distances.end(), less<int>());
    result = sensors[sensors.size() - 1] - sensors[0];
    for (int i = 0; i < (k - 1 < n - 1 ? k - 1 : n - 1); i++)
        result -= distances[distances.size() - 1 - i];
    return 0 > result ? 0 : result;
}
int main(void) {
    int n, k;
    cin >> n;
    cin >> k;
    vector<int> sensors(n);
    for (int i = 0; i < n; i++)
        cin >> sensors[i];
    sort(sensors.begin(), sensors.end(), less<int>());
    cout << min_range_sensors(n, k, sensors);
    return 0;
}