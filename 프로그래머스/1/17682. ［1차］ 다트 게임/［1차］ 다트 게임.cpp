#include <string>
#include <regex>
#include <vector>
#include <numeric>
#include <cmath>

using namespace std;

int solution(string dartResult) {
    int r=0,num;
    smatch dart;
    vector<string> dartlist;
    vector<int> dartnum;
    regex pattern {"\\d+[SDT][*#]?"};
    while(regex_search(dartResult,dart,pattern)) {
        dartlist.push_back(dart.str());
        dartResult=dart.suffix();
    }
    for(int i=0;i<dartlist.size();i++) {
        if(dartlist[i].find("S")!=string::npos) {
            num=pow(stoi(dartlist[i].substr(0,dartlist[i].find("S"))),1);
        } else if(dartlist[i].find("D")!=string::npos) {
            num=pow(stoi(dartlist[i].substr(0,dartlist[i].find("D"))),2);
        } else if(dartlist[i].find("T")!=string::npos) {
            num=pow(stoi(dartlist[i].substr(0,dartlist[i].find("T"))),3);
        }
        if(dartlist[i].find("*")!=string::npos) {
            if(dartnum.size()>0)
                dartnum[i-1]*=2;
            num*=2;
        } else if(dartlist[i].find("#")!=string::npos) {
            num*=-1;
        }
        dartnum.push_back(num);
    }
    r=accumulate(dartnum.begin(),dartnum.end(),0);
    return r;
}