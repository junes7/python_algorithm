import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[0]+[int(input()) for _ in range(3)]
s=min(arr[2]*2+arr[3]*4,(arr[1]+arr[3])*2,arr[1]*4+arr[2]*2)
print(s)