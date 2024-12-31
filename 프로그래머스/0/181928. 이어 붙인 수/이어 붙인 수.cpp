#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    
    int r=0;
    // string odd="", even="";
    // for(int i=0;i<num_list.size();i++) {
        // if(==0) {
        //     even+=to_string(num_list[i]);    
        // } else {
        //     odd+=to_string(num_list[i]);
        // }
    // }
    // r=stoi(odd)+stoi(even);
    vector<string> num={"",""};
    for(int i=0;i<num_list.size();i++)
        num[num_list[i]%2]+=to_string(num_list[i]);
    r=stoi(num[0])+stoi(num[1]);
    return r;
}