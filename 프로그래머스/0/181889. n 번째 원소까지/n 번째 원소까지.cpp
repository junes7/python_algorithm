#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> r;
    for(int i=0;i<n;i++) {
        r.push_back(num_list[i]);
    }
    return r;
}