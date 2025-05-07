import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    n=int(input())
    nb1=set(map(int,input().split()))
    m=int(input())
    nb2=[*map(int,input().split())]
    for num in nb2:
        print(1 if num in nb1 else 0)