#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int r = 1, l=num_list.size();
    for(int i=0;i<l;i++) {
        if(l>=11)
            r+=num_list[i];
        else
            r*=num_list[i];
    }
    return (l>=11)?r-1:r;
}