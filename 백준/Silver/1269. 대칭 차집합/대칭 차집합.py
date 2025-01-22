import sys
n,m=map(int,sys.stdin.readline().split())
a=list(map(int,sys.stdin.readline().split()))
b=list(map(int,sys.stdin.readline().split()))
diffl,diffr=list(set(a)-set(b)),list(set(b)-set(a))
print(len(diffl)+len(diffr))