#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double r=0;
    int s=0;
    for(int i=0;i<arr.size();i++) {
        s+=arr[i];
    }
    r=(double)s/arr.size();
    return r;
}