import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=[*map(int,input().split())]
even,odd=0,0
for i in range(n):
    if arr[i]%2==0:
        even+=1
    else:
        odd+=1
print("Happy" if even>odd else "Sad")