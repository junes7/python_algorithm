import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[*map(int,input().split())]
x,y,r=map(int,input().split())
print(arr.index(x)+1 if x in arr else 0)