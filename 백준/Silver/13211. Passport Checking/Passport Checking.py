import sys
input=lambda:sys.stdin.readline().rstrip()
ans = 0
s = set()
n = int(input())
for _ in range(n):
    stolen_passport = input().rstrip()
    s.add(stolen_passport)
k = int(input())
for _ in range(k):
    passport = input().rstrip()
    if passport in s:
        ans += 1
print(ans)