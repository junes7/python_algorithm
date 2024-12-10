#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> r;
    for(int i=0;i<numbers.size()-1;i++) {
        for(int j=i+1;j<numbers.size();j++) {
            if(find(r.begin(),r.end(),numbers[i]+numbers[j])==r.end())
                r.push_back(numbers[i]+numbers[j]);
        }
    }
    sort(r.begin(),r.end(),less<int>());
    return r;
}