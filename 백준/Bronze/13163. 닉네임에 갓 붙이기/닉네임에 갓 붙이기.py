import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    arr=input().split()
    arr[0]='god'
    print(''.join(arr))