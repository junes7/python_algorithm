import sys
input=lambda:sys.stdin.readline().rstrip()
rlt=[]
while 1:
    dir=input()
    if dir=="99999": break
    s=0
    for c in dir[:2]:
        s+=int(c)
    if s!=0:
        d="right" if s%2==0 else "left"
    print(d,dir[2:])