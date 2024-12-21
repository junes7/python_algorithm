#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> topping) {
    int r=0;
    map<int,int> tp1,tp2;
    for(int i=0;i<topping.size();i++) {
        tp1[topping[i]]++;
    }
    for(int i=0;i<topping.size();i++) {
        tp1[topping[i]]--;
        tp2[topping[i]]++;
        if(tp1[topping[i]]==0)
            tp1.erase(topping[i]);
        if(tp1.size()==tp2.size())
            r+=1;
    }
    return r;
}