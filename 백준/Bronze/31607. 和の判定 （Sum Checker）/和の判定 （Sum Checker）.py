import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[int(input()) for _ in range(3)]
for i in range(3):
    if arr[i]==sum(arr)-arr[i]:
        print(1)
        exit(0)
print(0)