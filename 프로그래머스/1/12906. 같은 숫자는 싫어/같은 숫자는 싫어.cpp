#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> r={arr[0]};
    int t=arr[0];
    for(int i=1;i<arr.size();i++) {
        if(arr[i]==t)
            continue;
        else {
            t=arr[i];
            r.push_back(arr[i]);
        }  
    }
    return r;
}