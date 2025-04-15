import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[1,3,5]
for _ in range(int(input())):
    g,c,e=map(int,input().split())
    print(arr[g-1]*(e-c) if e-c>0 else 0)