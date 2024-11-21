#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int r=-1;
    for(int i=0;i<num_list.size();i++) {
        if(num_list[i]<0) {
            r=i;
            break;
        }
    }
    return r;
}