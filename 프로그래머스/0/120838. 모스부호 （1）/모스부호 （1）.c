#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* letter) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* r=(char*)malloc(sizeof(char)*1001);
    memset(r,0,sizeof(char)*1001);
    char** morse[26]={".-","-...","-.-.","-..",
                   ".","..-.","--.","....",
                   "..",".---","-.-",".-..",
                   "--","-.","---",".--.",
                   "--.-",".-.","...","-",
                   "..-","...-",".--","-..-",
                   "-.--","--.."};
    char* temp=strtok(letter," ");
    int cnt=0;
    while(temp!=NULL) {
        for(int i=0;i<sizeof(morse)/sizeof(char);i++) {
            if(strcmp(morse[i],temp)==0) {
                r[cnt++]=97+i;
                break;
            }
        }
        temp=strtok(NULL," ");
    }
    return r;
}