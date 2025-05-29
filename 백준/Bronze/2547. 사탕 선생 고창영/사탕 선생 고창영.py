import sys
input=lambda:sys.stdin.readline().strip()
for _ in range(int(input())):
    sp=input()
    n=int(input())
    arr=[int(input()) for i in range(n)]
    print("YES" if sum(arr)%n==0 else "NO")