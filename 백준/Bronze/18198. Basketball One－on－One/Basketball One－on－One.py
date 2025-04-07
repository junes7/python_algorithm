import sys
input=lambda:sys.stdin.readline().rstrip()
st,total=input(),[0]*2
for i in range(0,len(st),2):
    total[ord(st[i])-65]+=int(st[i+1])
print('A' if total[0]>total[1] else 'B')