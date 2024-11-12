#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> r;
    if(direction=="right") {
        r.push_back(numbers[numbers.size()-1]);
        for(int i=0;i<numbers.size()-1;i++) {
            r.push_back(numbers[i]);
        }
    } else {
        for(int i=1;i<numbers.size();i++) {
            r.push_back(numbers[i]);
        }
        r.push_back(numbers[0]);
    }
    return r;
}