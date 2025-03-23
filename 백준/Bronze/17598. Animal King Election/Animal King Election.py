import sys
input=lambda:sys.stdin.readline().rstrip()
cntL,cntT=0,0
for _ in range(9):
    t=input()
    if t=="Lion":
        cntL+=1
    else:
        cntT+=1
if cntT>=5:
    print("Tiger")
elif cntL>=5:
    print("Lion")