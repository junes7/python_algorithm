#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> r;
    map<string,int> exp;
    string day, type;
    int t=0,d[]={0,0,0}, date;
    for(int i=0;i<terms.size();i++) {
        istringstream iss(terms[i]);
        iss>>type>>d[0];
        exp[type]=d[0];
    }
    stringstream ss(today);
    while(getline(ss,type,'.')) {
        d[t++]=stoi(type);
    }
    date=d[0]*12*28+(d[1]-1)*28+d[2];
    
    for(int i=0;i<privacies.size();i++) {
        istringstream iss(privacies[i]);
        iss>>day>>type;
        t=0;
        stringstream ss(day);
        while(getline(ss,day,'.')) {
            d[t++]=stoi(day); 
        }
        if(d[0]*12*28+(d[1]-1)*28+d[2]+exp[type]*28-1<date)
            r.push_back(i+1);
    }
    return r;
}