#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// survey_len은 배열 survey의 길이입니다.
// choices_len은 배열 choices의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* survey[], size_t survey_len, int choices[], size_t choices_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* r=(char*)malloc(sizeof(char)*4+1);
    char type[8]={'R','T','C','F','J','M','A','N'};
    int score[8]={0,0,0,0,0,0,0,0},idx1,idx2,idxr=0;
    r[4]='\0';
    memset(r,0,sizeof(char)*4+1);
    for(int i=0;i<survey_len;i++) {
        for(int j=0;j<8;j++) {
            if(survey[i][0]==type[j]) {
                if(j%2==0) {
                    idx1=j,idx2=j+1;
                } else {
                    idx1=j,idx2=j-1;
                }
                break;
            }
        }
        if(choices[i]<4) {
            score[idx1]+=4-choices[i];
        } else if(choices[i]>4) {
            score[idx2]+=choices[i]-4;
        }
    }
    for(int i=0;i<4;i++) {
        r[idxr++]=score[2*i]==score[2*i+1]?type[2*i]:score[2*i]>score[2*i+1]?type[2*i]:type[2*i+1];
    }
    return r;
}