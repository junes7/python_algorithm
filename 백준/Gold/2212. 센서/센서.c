#include <stdio.h>
#include <stdlib.h>
int compare(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int min_range_sensors(int n, int k, int *sensors) {
    int result, *distances = (int *)malloc(sizeof(int) * n - 1);
    for (int i = 1; i < n; i++)
        distances[i - 1] = sensors[i] - sensors[i - 1];
    qsort(distances, n - 1, sizeof(int), compare);
    result = sensors[n - 1] - sensors[0];
    for (int i = 0; i < ((k - 1 > n - 1) ? n - 1 : k - 1); i++)
        result -= distances[n - 2 - i];
    return 0 > result ? 0 : result;
}
int main(void) {
    int n, k, elem;
    scanf("%d", &n);
    scanf("%d", &k);
    int *sensors = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &sensors[i]);
    qsort(sensors, n, sizeof(int), compare);
    printf("%d", min_range_sensors(n, k, sensors));
    return 0;
}