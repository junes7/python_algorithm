#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// terms_len은 배열 terms의 길이입니다.
// privacies_len은 배열 privacies의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* today, const char* terms[], size_t terms_len, const char* privacies[], size_t privacies_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* r=(int*)malloc(sizeof(int)*privacies_len);
    memset(r,0,sizeof(int)*privacies_len);
    char* temp,ch;
    int date,d[3],idx=0,idxr=0,type[26];
    for(int i=0;i<terms_len;i++) {
        temp=strtok(terms[i]," ");
        while(temp!=NULL) {
            if(atoi(temp))
                type[terms[i][0]-65]=atoi(temp);
            temp=strtok(NULL," ");
        }
    }
    temp=strtok(today,".");
    while(temp!=NULL) {
        d[idx++]=atoi(temp);
        temp=strtok(NULL,".");
    }
    date=d[0]*12*28+(d[1]-1)*28+d[2];
    for(int i=0;i<privacies_len;i++) {
        idx=0;
        ch=privacies[i][strlen(privacies[i])-1];
        temp=strtok(privacies[i]," ");
        temp=strtok(temp,".");
        while(temp!=NULL) {
            d[idx++]=atoi(temp);
            temp=strtok(NULL,".");
        }
        if(d[0]*12*28+(d[1]-1)*28+d[2]+type[ch-65]*28-1<date)
            r[idxr++]=i+1;
    }
    return r;
}