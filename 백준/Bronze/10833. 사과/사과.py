import sys
input=lambda:sys.stdin.readline().rstrip()
rem=0
for _ in range(int(input())):
    stu,app=map(int,input().split())
    rem+=app%stu
print(rem)