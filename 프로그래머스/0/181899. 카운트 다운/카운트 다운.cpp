#include <string>
#include <vector>

using namespace std;

vector<int> solution(int start_num, int end_num) {
    vector<int> r;
    for(int i=start_num;i>=end_num;i--) {
        r.push_back(i);
    }
    return r;
}