import sys,math
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=[*map(float,input().split())]
area=0
for i in range(n):
    area+=arr[i]**3
print(f"{area**(1/3):.6f}")