import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    a,b=input().split()
    a,b=int(a,2),int(b,2)
    print(bin(a+b)[2:])