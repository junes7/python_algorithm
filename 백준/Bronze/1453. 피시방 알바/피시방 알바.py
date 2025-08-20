import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=[*map(int,input().split())]
seat,cnt=[],0
for i in range(n):
    if arr[i] in seat:         # 앉고 싶어하는 자리에 사람이 있으면
        cnt += 1                    # 거절
    else:                           # 없으면
        seat.append(arr[i])    # 자리에 앉음
print(cnt)