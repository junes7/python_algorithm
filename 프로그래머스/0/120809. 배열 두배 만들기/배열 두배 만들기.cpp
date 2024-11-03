#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> r;
    for(int i=0;i<numbers.size();i++) {
        r.push_back(numbers[i]*2);
    }
    return r;
}