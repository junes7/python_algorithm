#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int r=0, oddSum=0, evenSum=0;
    for(int i=0;i<num_list.size();i++) {
        if(i%2==0)
            evenSum+=num_list[i];
        else
            oddSum+=num_list[i];
    }
    r=(evenSum>=oddSum)?evenSum:oddSum;
    return r;
}