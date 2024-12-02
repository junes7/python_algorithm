#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> r;
    for(int i=0;i<arr.size();i++) {
        if(r.size()==0)
            r.push_back(arr[i]);
        else {
            if(r[r.size()-1]==arr[i])
                r.pop_back();
            else
                r.push_back(arr[i]);
        }
    }
    if(r.size()==0)
        r.push_back(-1);
    return r;
}