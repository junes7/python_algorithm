#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void *pa, const void *pb) {
    const int **a= (const int**)pa;
    const int **b= (const int**)pb;
    if(a[1]==b[1]) return a[0]<b[0];
    return b[1]>a[1];
}

int solution(int a, int b, int c, int d) {
    int r=6,dice[4]={a,b,c,d},idx=0;
    int** dcnt=(int**)malloc(sizeof(int*)*4);
    bool flag;
    for(int i=0;i<4;i++) {
        flag=true;
        dcnt[i]=malloc(sizeof(int)*2);
        memset(dcnt[i],0,sizeof(int)*2);
        for(int j=0;j<idx;j++) {
            if(dcnt[j][0]==dice[i]) {
                flag=false;
                dcnt[j][1]+=1;
                break;
            }    
        }
        if(flag) {
            dcnt[idx][0]=dice[i];
            dcnt[idx++][1]+=1;
        }
    }
    // for(int i=0;i<idx;i++) {
    //     printf("%d %d\n",dcnt[i][0],dcnt[i][1]);
    // }
    // printf("\n");
    qsort(dcnt,idx,sizeof(int**),compare);
    // for(int i=0;i<idx;i++) {
    //     printf("%d %d\n",dcnt[i][0],dcnt[i][1]);
    // }
    
    for(int i=0;i<idx;i++) {
        if(dcnt[i][1]==4) {
            r=1111*dcnt[i][0];
            break;
        } else if(dcnt[i][1]==3) {
            for(int j=0;j<idx;j++) {
                if(dcnt[j][1]==1) {
                    r=pow(10*dcnt[i][0]+dcnt[j][0],2);
                }
            }
            break;
        } else if(dcnt[i][1]==2) {
            if(dcnt[i+1][1]==2) {
                r=(dcnt[i][0]+dcnt[i+1][0])*abs(dcnt[i][0]-dcnt[i+1][0]);
            } else {
                for(int j=0;j<idx;j++) {
                   if(dcnt[j][1]==1) {
                       r=dcnt[j][0]*(dcnt[j+1][1]==1?dcnt[j+1][0]:dcnt[j+2][0]);
                       break;
                   }
                }
            }  
            break;
        } else {
            for(int j=0;j<idx;j++) {
                if(r>dcnt[j][0])
                    r=dcnt[j][0];
            }
        }
    }
    return r;
}