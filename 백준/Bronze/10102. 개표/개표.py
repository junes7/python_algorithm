import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
st=input()
t=[0]*2
for i in range(n):
    if st[i]=='A':
        t[0]+=1
    else:
        t[1]+=1
print("Tie" if t[0]==t[1] else "A" if t[0]>t[1] else "B")