import sys
input=lambda:sys.stdin.readline().rstrip()
n,m,k=map(int,input().split())
print(n//(k-m) if n%(k-m)==0 else n//(k-m)+1)