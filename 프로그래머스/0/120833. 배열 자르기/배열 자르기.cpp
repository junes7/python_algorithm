#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
    vector<int> r;
    for(int i=num1;i<num2+1;i++) {
        r.push_back(numbers[i]);
    }
    return r;
}