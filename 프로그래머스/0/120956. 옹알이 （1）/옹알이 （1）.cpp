#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<string> babbling) {
    int r=0;
    vector<string> pron={"aya","ye","woo","ma"};
    for(int i=0;i<babbling.size();i++) {
        for(int j=0;j<pron.size();j++) {
            while(babbling[i].find(pron[j])!=string::npos) {
                babbling[i]=babbling[i].replace(babbling[i].find(pron[j]),pron[j].length()," ");
            }
        }
        while(babbling[i].find(" ")!=string::npos) {
            babbling[i]=babbling[i].replace(babbling[i].find(" "),1,"");
        }
    }
    for(int i=0;i<babbling.size();i++) {
        if(babbling[i]=="")
            r+=1;
    }
    return r;
}