#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> r;
    string buffer;
    vector<string> t;
    for(int i=0;i<quiz.size();i++) {
        stringstream ss(quiz[i]);
        t={};
        while(getline(ss,buffer,' ')) {
            t.push_back(buffer);
        }
        if(t[1]=="+") {
            if(stoi(t[0])+stoi(t[2])==stoi(t[t.size()-1]))
                r.push_back("O");
            else
                r.push_back("X");
        } else {
            if(stoi(t[0])-stoi(t[2])==stoi(t[t.size()-1]))
                r.push_back("O");
            else
                r.push_back("X");
        }
        
    }
    return r;
}