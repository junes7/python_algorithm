#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> todo_list, vector<bool> finished) {
    vector<string> r;
    for(int i=0;i<todo_list.size();i++) {
        if(finished[i]==false)
            r.push_back(todo_list[i]);
    }
    
    return r;
}