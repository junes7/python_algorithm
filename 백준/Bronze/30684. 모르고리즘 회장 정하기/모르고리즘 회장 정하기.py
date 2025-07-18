import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=[]
for _ in range(n):
    st=input()
    if len(st)==3:
        arr+=[st]
arr.sort()
print(arr[0])