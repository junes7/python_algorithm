n = int(input())

array = []
for i in range(n):
    array.append(int(input()))
print(array)
array = sorted(array, reverse=True)
for i in array:
    print(i, end=' ')