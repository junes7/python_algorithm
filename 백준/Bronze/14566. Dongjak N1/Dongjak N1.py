import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=sorted([*map(int,input().split())])
diff=sorted([arr[i]-arr[i-1] for i in range(1,n)])
print(diff[0], diff.count(diff[0]))