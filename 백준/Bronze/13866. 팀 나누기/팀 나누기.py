import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[*map(int,input().split())]
print(abs((arr[3]+arr[0])-(arr[1]+arr[2])))