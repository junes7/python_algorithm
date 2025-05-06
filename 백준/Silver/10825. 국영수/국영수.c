#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stu {
    char name[11];
    int kor, eng, math;
};
int cmp(const void *pv1, const void *pv2) {
    struct stu v1 = *(struct stu *)pv1;
    struct stu v2 = *(struct stu *)pv2;
    if (v1.kor == v2.kor && v1.eng == v2.eng && v1.math == v2.math) return strcmp(v1.name, v2.name);
    if (v1.kor == v2.kor && v1.eng == v2.eng) return v2.math - v1.math;
    if (v1.kor == v2.kor) return v1.eng - v2.eng;
    return v2.kor - v1.kor;
}
int main(void) {
    int n;
    scanf("%d", &n);
    struct stu *arr = (struct stu *)malloc(sizeof(struct stu) * n);
    for (int i = 0; i < n; i++)
        scanf("%s %d %d %d", arr[i].name, &arr[i].kor, &arr[i].eng, &arr[i].math);
    qsort(arr, n, sizeof(struct stu), cmp);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i].name);
    return 0;
}