#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char* st = (char*)malloc(sizeof(char) * 11);
    scanf("%s", st);
    printf("%s", strcmp(st,"SONGDO")==0? "HIGHSCHOOL" : strcmp(st,"CODE")==0 ? "MASTER" : strcmp(st,"2023")==0 ? "0611" : "CONTEST");
    return 0;
}