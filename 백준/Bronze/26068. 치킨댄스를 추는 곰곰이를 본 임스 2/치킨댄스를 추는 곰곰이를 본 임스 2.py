import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
cnt=0
for _ in range(n):
    due,num=input().split('-')
    num=int(num)
    if num>90:
        continue
    else:
        cnt+=1
print(cnt)