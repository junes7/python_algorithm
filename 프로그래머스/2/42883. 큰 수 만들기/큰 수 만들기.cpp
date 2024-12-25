#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string r="";
    vector<int> st;
    for(int i=0;i<number.size();i++) {
        while(!st.empty() and st[st.size()-1]<(number[i]-48) and k>0) {
            st.pop_back();
            k-=1;
        }
        st.push_back(number[i]-48);       
    }
    if(k>0) {
        for(int j=0;j<k;j++)
            st.pop_back();
    }
    for(int i=0;i<st.size();i++) {
        r+=to_string(st[i]);
    }
    return r;
}