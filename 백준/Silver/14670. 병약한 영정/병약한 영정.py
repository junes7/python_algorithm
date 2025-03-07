import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
dict={}
for _ in range(n):
    Me,Mn=map(int,input().split())
    dict[Me]=Mn;
r=int(input())
for _ in range(r):
    L,*arr=map(int,input().split())
    flag=True
    for i in range(L):
        if dict.get(arr[i])==None:
            flag=False
            print("YOU DIED")
            break
    if flag:
        for i in range(L):
            print(dict[arr[i]],end=' ')
        print()