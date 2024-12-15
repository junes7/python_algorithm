#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string r="";
    vector<vector<char>> type={{'R','T'},{'C','F'},{'J','M'},{'A','N'}};
    map<char,int> score;
    for(int i=0;i<survey.size();i++) {
        if(choices[i]<4) {
            if(score.find(survey[i][0])!=score.end())
                score[survey[i][0]]+=4-choices[i];
            else
                score[survey[i][0]]=4-choices[i];
        } else if(choices[i]>4){
            if(score.find(survey[i][1])!=score.end())
                score[survey[i][1]]+=choices[i]-4;
            else
                score[survey[i][1]]=choices[i]-4;
        }
    }
    for(int i=0;i<type.size();i++) {
        r+=(score[type[i][0]]<score[type[i][1]])?type[i][1]:type[i][0];
    }
    return r;
}