import sys
input=lambda:sys.stdin.readline().rstrip()
abbrev=['k','l','p']
cnt=[]
for _ in range(3):
    st=input()
    cnt+=[st[0]]
cnt.sort()
print("GLOBAL" if cnt==abbrev else "PONIX")