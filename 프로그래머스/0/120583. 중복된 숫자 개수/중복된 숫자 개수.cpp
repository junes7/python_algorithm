#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int r=0;
    // method1 for loop
    // for(int i=0;i<array.size();i++) {
    //     if(array[i]==n)
    //         r+=1;
    // }
    // method2 count function
    // r=count(array.begin(),array.end(),n);
    // method3 accumulate function
    r=accumulate(array.begin(),array.end(),0,[n](int& x, int &i){return x+=i==n;});
    return r;
}