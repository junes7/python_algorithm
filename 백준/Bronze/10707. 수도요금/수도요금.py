import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[int(input()) for _ in range(5)]
total_x=arr[0]*arr[4]
total_y=arr[1] + (0 if arr[4]<=arr[2] else (arr[4]-arr[2])*arr[3])
print(total_x if total_x<total_y else total_y)