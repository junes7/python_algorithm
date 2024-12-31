#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int r=0;
    for(int i=0;i<array.size();i++)
        if(array[i]>height)
            r+=1;
    return r;
}