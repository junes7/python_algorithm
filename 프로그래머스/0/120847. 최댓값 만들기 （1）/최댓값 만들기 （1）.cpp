#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int r=0;
    for(int i=0;i<numbers.size()-1;i++) {
        for(int j=i+1;j<numbers.size();j++) {
            if(r<numbers[i]*numbers[j])
                r=numbers[i]*numbers[j];
        }
    }
    return r;
}