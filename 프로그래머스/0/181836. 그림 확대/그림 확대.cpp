#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> r;
    string tem;
    for(int i=0;i<picture.size();i++) {
        tem="";
        for(int j=0;j<picture[i].size();j++) {
            for(int t=0;t<k;t++) {
                tem+=picture[i][j];
            }
        }
        for(int t=0;t<k;t++) {
            r.push_back(tem);
        }
    }
    return r;
}