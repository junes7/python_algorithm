#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    string r=(num%2!=0)?"Odd":"Even";
    return r;
}