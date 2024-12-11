#include <vector>
#include <set>

using namespace std;

int solution(vector<int> nums)
{
    set<int> nset;
    for(int i=0;i<nums.size();i++) {
        nset.insert(nums[i]);
    }
    int r=nset.size(),l=nums.size()/2;
    return (l<r)?l:r;
}