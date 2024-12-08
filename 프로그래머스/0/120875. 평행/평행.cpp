#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> dots) {
    vector<int> r;
    vector<double> diag;
    for(int i=0;i<dots.size();i++) {
        for(int j=i+1;j<dots.size();j++) {
            diag.push_back((double)(dots[j][0]-dots[i][0])/(dots[j][1]-dots[i][1]));
        }
    }
    for(int i=0;i<diag.size()/2;i++) {
        r.push_back(diag[i]==diag[diag.size()-1-i]?1:0);
    }
    return *max_element(r.begin(),r.end());
}