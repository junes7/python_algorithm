#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int r=0,s1=0,s2=0;
    if(arr1.size()!=arr2.size()) {
        // if(arr1.size() > arr2.size())
        //     r=1;
        // else
        //     r=-1;
        r=(arr1.size()>arr2.size())?1:-1;
    } else {
        for(int i=0;i<arr1.size();i++) {
            s1+=arr1[i];
            s2+=arr2[i];
        }
        // if(s1==s2)
        //     r=0;
        // else if(s1>s2)
        //     r=1;
        // else
        //     r=-1;
        r=(s1==s2)?0:(s1>s2)?1:-1;
    }
    return r;
}