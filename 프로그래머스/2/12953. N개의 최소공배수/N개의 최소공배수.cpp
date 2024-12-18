#include <string>
#include <vector>

using namespace std;

int gcd(const int x, const int y) {
    return (x%y==0)?y:gcd(y,x%y);
}

int solution(vector<int> arr) {
    int r=arr[0],gc;
    for(int i=0;i<arr.size()-1;i++) {
        gc=gcd(r,arr[i+1]);
        r=r*arr[i+1]/gc;
    }
    return r;
}