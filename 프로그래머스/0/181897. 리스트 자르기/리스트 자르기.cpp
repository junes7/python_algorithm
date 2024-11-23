#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> r;
    if(n==1) {
        for(int i=0;i<slicer[1]+1;i++) {
            r.push_back(num_list[i]);
        }
    } else if(n==2) {
        for(int i=slicer[0];i<num_list.size();i++) {
            r.push_back(num_list[i]);
        }
    } else if(n==3) {
        for(int i=slicer[0];i<slicer[1]+1;i++) {
            r.push_back(num_list[i]);
        }
    } else {
        for(int i=slicer[0];i<slicer[1]+1;i=i+slicer[2]) {
            r.push_back(num_list[i]);
        }
    }
    return r;
}