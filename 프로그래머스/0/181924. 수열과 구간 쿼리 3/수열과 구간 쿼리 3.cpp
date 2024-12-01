#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    int t;
    for(int i=0;i<queries.size();i++) {
        t=arr[queries[i][0]];
        arr[queries[i][0]]=arr[queries[i][1]];
        arr[queries[i][1]]=t;
    }
    return arr;
}