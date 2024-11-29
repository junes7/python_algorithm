#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int r=0,cnt;
    for(int i=0;i<num_list.size();i++) {
        cnt=0;
        while(num_list[i]>1) {
            if(num_list[i]%2==0)
                num_list[i]/=2;
            else
                num_list[i]=(num_list[i]-1)/2;
            cnt+=1;
        }
        r+=cnt;
    }
    return r;
}