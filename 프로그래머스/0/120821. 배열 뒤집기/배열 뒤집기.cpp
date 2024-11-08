#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> r;
    // for(int i=num_list.size()-1;i>-1;i--) {
    //     r.push_back(num_list[i]);
    // }
    int l=num_list.size();
    for(int i=0;i<l;i++) {
        r.push_back(num_list[l-1-i]);
    }
    return r;
}