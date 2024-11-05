#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> r;
    r.push_back(money/5500);
    r.push_back(money%5500);
    return r;
}