import sys
input=lambda:sys.stdin.readline().rstrip()
total=[]
for i in range(4):
    off,on=map(int,input().split())
    total+=[(0 if i==0 else total[-1])-off+on]
print(max(total))