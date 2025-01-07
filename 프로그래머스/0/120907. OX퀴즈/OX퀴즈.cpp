#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> r,t;
    string buffer;
    for(int i=0;i<quiz.size();i++) {
        t={};
        stringstream ss(quiz[i]);
        while(getline(ss,buffer,' ')) {
            t.push_back(buffer);
        }
        if(t[1]=="+") {
            // if(stoi(t[0])+stoi(t[2])==stoi(t[t.size()-1]))
            //     r.push_back("O");
            // else
            //     r.push_back("X");
            r.push_back(stoi(t[0])+stoi(t[2])==stoi(t[t.size()-1])?"O":"X");
        } else {
            // if(stoi(t[0])-stoi(t[2])==stoi(t[t.size()-1]))
            //     r.push_back("O");
            // else
            //     r.push_back("X");
            r.push_back(stoi(t[0])-stoi(t[2])==stoi(t[t.size()-1])?"O":"X");
        }
    }
    return r;
}