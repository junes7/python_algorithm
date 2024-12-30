#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> r=num_list;
    int s=num_list.size();
    if(num_list[s-1]>num_list[s-2])
        r.push_back(num_list[s-1]-num_list[s-2]);
    else
        r.push_back(num_list[s-1]*2);
    return r;
}