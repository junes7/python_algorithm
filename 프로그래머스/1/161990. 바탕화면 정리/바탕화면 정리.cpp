#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> wallpaper) {

    // int lux=50,luy=50,rdx=0,rdy=0;
    // for(int i=0;i<wallpaper.size();i++) {
    //     for(int j=0;j<wallpaper[i].size();j++) {
    //         if(wallpaper[i][j]=='#') {
    //             cout<<i<<' '<<j<<endl;
    //             if(lux>i)
    //                 lux=i;
    //             if(luy>j)
    //                 luy=j;
    //             if(rdx<i)
    //                 rdx=i;
    //             if(rdy<j)
    //                 rdy=j;
    //         }
    //     }
    // }
    // vector<int> r={lux,luy,rdx+1,rdy+1};
    // method2 using vector array
    vector<int> lft,rgt;
    for(int i=0;i<wallpaper.size();i++) {
        for(int j=0;j<wallpaper[i].size();j++) {
            if(wallpaper[i][j]=='#') {
                lft.push_back(i);
                rgt.push_back(j);
            }
        }
    }
    vector<int> r={*min_element(lft.begin(),lft.end()),*min_element(rgt.begin(),rgt.end()),*max_element(lft.begin(),lft.end())+1,*max_element(rgt.begin(),rgt.end())+1};
    return r;
}