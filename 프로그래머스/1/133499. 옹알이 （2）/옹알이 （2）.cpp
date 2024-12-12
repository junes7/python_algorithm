#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> babbling) {
    int r=0;
    vector<string> pronoun={"aya", "ye", "woo", "ma"};
    vector<string> duplePronoun={"ayaaya","yeye","woowoo","mama"};
    for(int i=0;i<babbling.size();i++) {
        for(int j=0;j<duplePronoun.size();j++) {
            if(babbling[i].find(duplePronoun[j])==string::npos) {
                while(babbling[i].find(pronoun[j])!=string::npos) {
                    babbling[i].insert(babbling[i].find(pronoun[j])," ");
                    babbling[i].erase(babbling[i].find(pronoun[j]),pronoun[j].length());
                }
            } else {
                babbling[i]="x";
                break;
            }
        }
        while(babbling[i].find(" ")!=string::npos) {
            babbling[i].erase(babbling[i].find(" "),1);
        }
    }
    for(int i=0;i<babbling.size();i++) {
        if(babbling[i]=="")
            r+=1;
    }
    return r;
}