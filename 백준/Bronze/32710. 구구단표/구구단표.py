import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
res=False
for i in range(1,10):
    if n%i==0 and n//i<=9:
        res=True
        break
print(1 if res else 0)