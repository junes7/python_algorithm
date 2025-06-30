import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=sorted([int(input()) for _ in range(n)])
print("%.6f\n%.6f" % (sum(arr)/n,arr[n//2] if n%2!=0 else (arr[n//2-1]+arr[n//2])/2))