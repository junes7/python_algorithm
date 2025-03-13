import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=[*map(int,input().split())]
r=sum(arr)
print("Right" if r>0 else "Left" if r<0 else "Stay")