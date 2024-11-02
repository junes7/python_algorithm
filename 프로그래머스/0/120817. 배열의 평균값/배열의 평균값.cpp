#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double r=0;
    int s=0;
    for(int i=0;i<numbers.size();i++) {
        s+=numbers[i];
    }
    r=s/(double)numbers.size();
    return r;
}