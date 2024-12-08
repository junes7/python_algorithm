#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int r=0;
    for(int i=0;i<10;i++) {
        if(find(numbers.begin(),numbers.end(),i)-numbers.begin()==numbers.size())
            r+=i; 
    }
    return r;
}