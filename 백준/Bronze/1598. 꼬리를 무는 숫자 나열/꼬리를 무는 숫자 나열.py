import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[*map(int,input().split())]
# 나머지 값 일치 위해 -1씩 빼준다.
arr[0]-=1
arr[1]-=1
print(abs(arr[0]//4-arr[1]//4)+abs(arr[0]%4-arr[1]%4))