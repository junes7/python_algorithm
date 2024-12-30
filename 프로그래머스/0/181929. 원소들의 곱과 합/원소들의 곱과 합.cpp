#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(vector<int> num_list) {
    int mul=1, sum=0, r=0;
    for(int i=0;i<num_list.size();i++) {
        mul*=num_list[i];
        sum+=num_list[i];
    }
    r=(mul<pow(sum,2))?1:0;
    return r;
}