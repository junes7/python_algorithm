import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for _ in range(n):
    st=input()
    t=[st[0]]
    for i in range(1,len(st)):
        if t[-1]!=st[i]:
            t+=[st[i]]
    print(''.join(t))