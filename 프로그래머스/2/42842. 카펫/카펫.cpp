#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> r;
    int total=brown+yellow,row;
    for(int col=3;col<total+1;col++) {
        row=total/col;
        if((row-2)*(col-2)==yellow)
            break;
    }
    r={row,total/row};
    return r;
}