import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for _ in range(n):
    num=int(input())
    print(num,"is even" if num%2==0 else "is odd")