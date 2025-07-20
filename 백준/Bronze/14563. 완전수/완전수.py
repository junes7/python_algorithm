import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=[*map(int,input().split())]
for i in range(n):
    t,pri_num=arr[i],0 if arr[i]==1 else 1
    for i in range(2,t):
        if t%i==0:
            pri_num+=i
    print("Perfect" if pri_num==t else "Deficient" if pri_num<t else "Abundant")