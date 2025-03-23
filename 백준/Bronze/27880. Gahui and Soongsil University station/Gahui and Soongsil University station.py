import sys
input=lambda:sys.stdin.readline().rstrip()
s=0
while True:
    t=input()
    if t=="":break
    type,steps=t.split()
    if type=="Es":
        s+=21*int(steps)
    elif type=="Stair":
        s+=17*int(steps)
print(s)