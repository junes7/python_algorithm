#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int elem;
    vector<int> re;
    for (int i = 0; i < 10; i++) {
        cin >> elem;
        elem %= 42;
        if (find(re.begin(), re.end(), elem) == re.end())
            re.push_back(elem);
    }
    cout << re.size() << endl;
    return 0;
}