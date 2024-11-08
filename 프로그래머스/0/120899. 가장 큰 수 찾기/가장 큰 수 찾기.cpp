#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> r;
    int max=0, idx=0;
    for(int i=0;i<array.size();i++) {
        if(max<array[i]) {
            max=array[i];
            idx=i;
        }
        
    }
    r.push_back(max);
    r.push_back(idx);
    return r;
}