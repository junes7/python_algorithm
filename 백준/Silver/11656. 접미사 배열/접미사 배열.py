import sys
input=lambda:sys.stdin.readline().rstrip()
st=input()
arr=sorted([st[i:] for i in range(len(st)-1,-1,-1)])
print(*arr,sep="\n")