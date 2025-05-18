import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
w=sum(map(int,input().split()))
print("yes" if w%3==0 else "no")