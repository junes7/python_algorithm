#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int r=0;
    sort(A.begin(),A.end());
    sort(B.begin(),B.end(),greater<int>());
    for(int i=0;i<A.size();i++)
        r+=A[i]*B[i];
    return r;
}