#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
long fill_boxes(int l, int w, int h, vector<pair<int, int>> &blocks, int n) {
    long volume = (long)l * w * h, used_volume = 0, total_cnt = 0, size, cnt, max_cnt, use_cnt;
    for (int i = 0; i < n; i++) {
        size = 1 << blocks[i].first;
        cnt = blocks[i].second;
        if (volume <= used_volume) break;
        max_cnt = (l / size) * (w / size) * (h / size);
        max_cnt -= used_volume / pow(size, 3);
        use_cnt = min(cnt, max_cnt);
        used_volume += use_cnt * pow(size, 3);
        total_cnt += use_cnt;
    }
    return used_volume == volume ? total_cnt : -1;
}
int main(void) {
    int l, w, h, n;
    cin >> l >> w >> h;
    cin >> n;
    vector<pair<int, int>> blocks(n, pair<int, int>(2, 0));
    for (int i = 0; i < n; i++)
        cin >> blocks[i].first >> blocks[i].second;
    sort(blocks.begin(), blocks.end(), [](const pair<int, int> a, const pair<int, int> b) {
        return a.first > b.first;
    });
    cout << fill_boxes(l, w, h, blocks, n);
    return 0;
}