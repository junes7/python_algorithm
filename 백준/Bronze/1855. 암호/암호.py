import sys
input=lambda:sys.stdin.readline().rstrip()
n = int(input())
s = input()
arr = []
for i in range(0, len(s), n):
    arr.append(s[i:i+n])  
for j in range(1, len(arr), 2):
    arr[j] = arr[j][::-1]
res = []
for i in range(n):
    for j in range(len(arr)):
        res.append(arr[j][i])
print(''.join(res))