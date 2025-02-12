#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
long fill_boxes(int l, int w, int h, vector<pair<int, int>> &blocks) {
    long volume = (long)l * w * h, total_cnt = 0, used_volume = 0, size, cnt, max_cnt, use_cnt;
    for (int i = 0; i < blocks.size(); i++) {
        size = pow(2, blocks[i].first);
        cnt = blocks[i].second;
        if (volume <= used_volume) break;
        max_cnt = (l / size) * (w / size) * (h / size);
        max_cnt -= used_volume / (size * size * size);
        use_cnt = min(cnt, max_cnt);
        used_volume += use_cnt * (size * size * size);
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
    cout << fill_boxes(l, w, h, blocks);
    return 0;
}