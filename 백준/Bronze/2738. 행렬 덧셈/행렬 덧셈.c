#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int n,m,idx=0;
    scanf("%d %d",&n,&m);
    char *ch=(char*)malloc(sizeof(char)*30000),*temp;
    memset(ch,0,30000);
    int num[n][m];
    memset(num,0,sizeof(int)*n*m);
    fgets(ch,30000,stdin);
    for(int i=0;i<2;i++) {
        for(int j=0;j<n;j++) {
            idx=0;
            fgets(ch,30000,stdin);
            // scanf("%[^\n]s",&ch);
            temp=strtok(ch," ");
            while(temp!=NULL) {
                num[j][idx++]+=atoi(temp);
                temp=strtok(NULL," ");
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            printf("%d ",num[i][j]);
        }
        if(i<n-1)
            printf("\n");
    }
    return 0;
}