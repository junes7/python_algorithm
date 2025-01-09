#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int elem,idx=0,maxn=0,dic[3][2];
    bool flag;
    int* num=(int*)malloc(sizeof(int)*3);
    memset(dic,0,sizeof(int)*3*2);
    for(int i=0;i<3;i++) {
        scanf("%d",&elem);
        num[i]=elem;
    }
    for(int i=0;i<3;i++) {
        flag=true;
        for(int j=0;j<3;j++) {
            if(dic[j][0]==num[i]) {
                dic[j][1]+=1;
                flag=false;
                break;
            }   
        }
        if(flag) {
            dic[idx][0]=num[i];
            dic[idx++][1]=1;
        }
    }
    if(idx==1) {
        for(int i=0;i<idx;i++) {
            if(dic[i][1]==3) {
                maxn=dic[i][0];
                break;
            }
        }
        printf("%d\n",10000+maxn*1000);
    } else if(idx==2) {
        for(int i=0;i<idx;i++) {
            if(dic[i][1]==2) {
                maxn=dic[i][0];
                break;
            }
        }
        printf("%d\n",1000+maxn*100);
    } else {
        for(int i=0;i<3;i++) {
            if(maxn<num[i])
                maxn=num[i];
        }
        printf("%d\n",maxn*100);
    }
    return 0;
}