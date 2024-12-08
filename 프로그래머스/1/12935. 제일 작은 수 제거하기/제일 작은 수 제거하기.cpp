#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> r=arr;
    int min=*min_element(r.begin(),r.end());
    r.erase(remove(r.begin(),r.end(),min),r.end());
    if(r.size()==0)
        r.push_back(-1);
    return r;
}