import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
st=input()
cur=[0,0]
dir={'N':(-1,0),'S':(1,0),'W':(0,-1),'E':(0,1)}
for i in range(n):
    cur[0]+=dir[st[i]][0]
    cur[1]+=dir[st[i]][1]
print(abs(cur[0])+abs(cur[1]))