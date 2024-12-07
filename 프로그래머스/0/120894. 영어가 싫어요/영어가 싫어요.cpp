#include <string>
#include <vector>
using namespace std;

long long solution(string numbers) {
    long long r=0;
    int i=0;
    vector<string> nums={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(int i=0;i<nums.size();i++) {
        while(numbers.find(nums[i])!=string::npos) {
            numbers.replace(numbers.find(nums[i]),nums[i].length(),to_string(i));
        }
    }
    r=stoll(numbers);
    return r;
}