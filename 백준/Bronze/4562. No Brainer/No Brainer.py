import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    x,y=map(int,input().split())
    print("NO BRAINS" if x<y else "MMM BRAINS")