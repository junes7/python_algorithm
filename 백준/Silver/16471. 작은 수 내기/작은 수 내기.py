import sys
input=lambda:sys.stdin.readline().rstrip()
n = int(input())
j = list(map(int, input().split()))
s = list(map(int, input().split()))
j.sort(reverse=True)
s.sort()
cnt = 0
for i in j:
    if i >= s[-1]:
        pass
    else:
        cnt += 1
        s.pop()
if cnt >= (n+1)/2:
    print("YES")
else:
    print("NO")