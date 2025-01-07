#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// cards1_len은 배열 cards1의 길이입니다.
// cards2_len은 배열 cards2의 길이입니다.
// goal_len은 배열 goal의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* cards1[], size_t cards1_len, const char* cards2[], size_t cards2_len, const char* goal[], size_t goal_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* r=(char*)malloc(sizeof(char)*4);
    // char* ch[]={"Yes","No"};
    memset(r,0,sizeof(char)*4);
    // r[4]='\0';
    int idx1=0,idx2=0,cnt=0,idx=0;
    for(int i=0;i<goal_len;i++) {
        printf("%s %s %s\n",goal[i],cards1[idx1],cards2[idx2]);
        printf("%d %d\n",strcmp(goal[i],cards1[idx1]),strcmp(goal[i],cards2[idx2]));
        
        if(idx1<cards1_len && strcmp(goal[i],cards1[idx1])==0) {
            cnt+=1;
            idx1+=1;
            
        } else if(idx2<cards2_len && strcmp(goal[i],cards2[idx2])==0) {
            cnt+=1;
            idx2+=1;
            
        } else {
            
        }
        // else {
        //     // r[idx++]="N";
        //     // r[idx++]="o";
        //     // r[idx]='\0';
        //     // return r;
        // }
        // printf("cnt: %d\n",cnt);
    }
    // strcpy(r,cnt==goal_len?"Yes":"No");
    
    
    // if(cnt==goal_len)
    //     strcpy(r,"Yes");
    // else
    //     strcpy(r,"No");
    
    return r;
}