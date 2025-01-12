#include <stdio.h>
#include <string.h>

int main(void) {
    int cnt=0;
    char ch[1000000];
    char* temp;
    scanf("%[^\n]s",ch);
    temp=strtok(ch," ");
    while(temp!=NULL) {
        cnt+=1;
        temp=strtok(NULL," ");
    }
    printf("%d\n",cnt);
    return 0;
}