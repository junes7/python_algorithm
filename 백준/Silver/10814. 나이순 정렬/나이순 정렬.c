#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int age;
    char name[101];
    int idx;
} client;
int compare(const void *pa, const void *pb) {
    const client a = *(client *)pa;
    const client b = *(client *)pb;
    if (a.age == b.age) return a.idx > b.idx;
    return a.age > b.age;
}
int main(void) {
    int n;
    client *member = (client *)malloc(sizeof(client) * 100000);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %s", &member[i].age, member[i].name);
        member[i].idx = i;
    }
    qsort(member, n, sizeof(client), compare);
    for (int i = 0; i < n; i++)
        printf("%d %s\n", member[i].age, member[i].name);
    return 0;
}