#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> r;
    for(int i=0;i<arr.size();i++) {
        if(arr[i]>=50 and arr[i]%2==0)
            r.push_back(arr[i]/2);
        else if(arr[i]<50 and arr[i]%2==1)
            r.push_back(arr[i]*2);
        else
            r.push_back(arr[i]);   
    }
    return r;
}