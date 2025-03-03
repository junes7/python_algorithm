import sys
input=lambda:sys.stdin.readline().rstrip()
s=input()
arr=[[":fan:"]*3 for _ in range(3)]
arr[1][1]=":"+s+":"
for a in arr:
    print(''.join(a))