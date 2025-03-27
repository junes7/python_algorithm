import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[]
while True:
    n=input()
    if n=="": break
    arr+=[int(n)]
s=sum(arr)
for a in arr:
    if s-a==a:
        print(a)
        break