#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int n) {
    int r = 0;
    for(int i=0;i<numbers.size();i++) {
        if(r>n)
            break;
        r+=numbers[i];
    }
    return r;
}