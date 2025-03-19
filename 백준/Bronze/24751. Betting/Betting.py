import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
print(f"{(100-n)/n+1:.10f}")
print(f"{n/(100-n)+1:.10f}")