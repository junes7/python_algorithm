#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> r;
    for(int i=num_list.size()-1;i>-1;i--) {
        r.push_back(num_list[i]);
    }
    return r;
}