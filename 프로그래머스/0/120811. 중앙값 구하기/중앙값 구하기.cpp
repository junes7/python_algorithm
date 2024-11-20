#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array) {
    int r=0;
    // sort(array.begin(),array.end(),less<int>());
    // Bubble Sort
    for(int i=0;i<array.size()-1;i++) {
        for(int j=0;j<array.size()-i-1;j++) {
            if(array[j]>array[j+1]) {
                int t=array[j];
                array[j]=array[j+1];
                array[j+1]=t;
            }
        }
    }
    r=array[array.size()/2];
    return r;
}