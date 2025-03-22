import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
s=input()
t=s[0]
for i in range(1,n):
    if s[i]!=t:
        print("No")
        exit(0)
print("Yes")