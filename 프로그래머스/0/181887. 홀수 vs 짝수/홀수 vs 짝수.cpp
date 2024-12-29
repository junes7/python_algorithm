#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    vector<int> r={0,0};
    for(int i=0;i<num_list.size();i++) {
        r[i%2]+=num_list[i];
    }
    return r[0]>=r[1]?r[0]:r[1];
    // int r=0,oddSum=0, evenSum=0;
    // for(int i=0;i<num_list.size();i++) {
    //     if(i%2==0)
    //         oddSum+=num_list[i];
    //     else
    //         evenSum+=num_list[i];
    // }
    // r=(evenSum>=oddSum)?evenSum:oddSum;
    // return r;
}