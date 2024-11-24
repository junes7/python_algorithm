#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> r;
    for(int i=0;i<arr.size();i++) {
        r.push_back((k%2==1)?arr[i]*k:arr[i]+k);
    }
    return r;
}