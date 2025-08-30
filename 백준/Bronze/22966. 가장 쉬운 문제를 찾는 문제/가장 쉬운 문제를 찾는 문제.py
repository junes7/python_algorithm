import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
lst = []
for _ in range(n):
    name, num = map(str, input().split())
    lst.append([name, int(num)])
lst.sort(key = lambda x : x[1])
print(lst[0][0])