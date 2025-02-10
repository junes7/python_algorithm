#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(void) {
    int n, x, result = 0;
    cin >> n;
    vector<string> s(n);
    vector<int> words_sort;
    map<char, int> words;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < s.size(); i++) {
        x = s[i].size() - 1;
        for (int j = 0; j < s[i].size(); j++)
            words[s[i][j]] = words.find(s[i][j]) != words.end() ? words[s[i][j]] + pow(10, x--) : pow(10, x--);
    }
    map<char, int>::iterator iter;
    for (iter = words.begin(); iter != words.end(); iter++)
        words_sort.push_back(iter->second);
    x = 9;
    sort(words_sort.begin(), words_sort.end(), greater<int>());
    for (int i = 0; i < words_sort.size(); i++)
        result += words_sort[i] * x--;
    cout << result;
    return 0;
}