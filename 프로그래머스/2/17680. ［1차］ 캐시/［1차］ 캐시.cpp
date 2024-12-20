#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int r=0;
    vector<string> cache;
    if(cacheSize==0)
        r=cities.size()*5;
    else {
        for(int i=0;i<cities.size();i++) {
            transform(cities[i].begin(),cities[i].end(),cities[i].begin(),[](auto c) {return tolower(c);});
            if(find(cache.begin(),cache.end(),cities[i])!=cache.end()) {
                cache.erase(find(cache.begin(),cache.end(),cities[i]));
                cache.push_back(cities[i]);
                r+=1;
            } else {
                if(cache.size()>=cacheSize)
                    cache.erase(cache.begin());
                cache.push_back(cities[i]);
                r+=5;
            }
        }
    }
    return r;
}