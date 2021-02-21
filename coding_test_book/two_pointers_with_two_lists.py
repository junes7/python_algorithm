n = 3
m = 4
a = [1, 3, 5]
b = [2, 4, 6, 8]
i, j, k = 0, 0, 0
result = [0] * (n + m)
while i < n or j < m:
    if j >= m or (i < n and a[i] <= b[j]):
        result[k] += a[i]
        i += 1
    else: # i >= n or (j < m and  a[i] >= b[j])
        result[k] += b[j]
        j += 1
    k += 1

for i in result:
    print(i, end=' ')
