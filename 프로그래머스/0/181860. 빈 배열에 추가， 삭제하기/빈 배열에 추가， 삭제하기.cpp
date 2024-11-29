#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> r;
    for(int i=0;i<flag.size();i++) {
        if(flag[i]==true) {
            for(int j=0;j<arr[i]*2;j++) {
                r.push_back(arr[i]);
            } 
        } else {
            r.erase(r.begin()+(r.size()-arr[i]),r.end());     
        }
    }
    return r;
}