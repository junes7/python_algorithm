#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> num_list, int n) {
    // int r=find(num_list.begin(),num_list.end(),n)!=num_list.end()?1:0;
    int r=0;
    for(int i=0;i<num_list.size();i++) {
        if(num_list[i]==n) {
            r=1;
            break;
        }
    }
    return r;
}