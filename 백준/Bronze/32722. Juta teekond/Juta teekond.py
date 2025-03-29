import sys
input=lambda:sys.stdin.readline().rstrip()
road=[(1,3),(6,8),(2,5)]
arr=[int(input()) for _ in range(3)]
flag=True
for i in range(3):
    if arr[i] not in road[i]:
        flag=False
        break
print("JAH" if flag else "EI")