#include <string>
#include <vector>
#include <numeric>

using namespace std;

double solution(vector<int> numbers) {
    double r=0;
    // method1 accumulate function
    int s=accumulate(numbers.begin(),numbers.end(),0);
    // method2 for loop
    // for(int i=0;i<numbers.size();i++) {
    //     s+=numbers[i];
    // }
    r=s/(double)numbers.size();
    return r;
}