#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s, const char* skip, int index) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* r=(char*)malloc(sizeof(char)*strlen(s)),ch[2];
    strcpy(r,s);
    bool flag;
    printf("%s\n",r);
    for(int i=0;i<strlen(r);i++) {
        for(int j=0;j<index;j++) {
            r[i]=(r[i]-97+1)%26+97;
            flag=false;
            ch[0]=r[i];
            ch[1]='\0';
            // printf("%s %s\n",ch,strstr(skip,ch));
            while(true) {
                for(int k=0;k<strlen(skip);k++) {
                    if(skip[k]==r[i]) {
                        flag=true;
                        break;
                    }
                }
                // printf("%s %s %d\n",ch,r,flag);
                if(flag)
                    r[i]=(r[i]-97+1)%26+97;
                else
                    break;
            }
        }
    }
    return r;
}