#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> r={0,0};
    for(int i=0;i<num_list.size();i++) {
        if(num_list[i]%2==0)
            r[0]+=1;
        else
            r[1]+=1;
    }
    return r;
}