#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int r=0,left=0,right=people.size()-1;
    sort(people.begin(),people.end(),less<int>());
    while(left<=right) {
        if(people[left]+people[right]<=limit)
            left+=1;
        right-=1;
        r+=1;
    }
    return r;
}