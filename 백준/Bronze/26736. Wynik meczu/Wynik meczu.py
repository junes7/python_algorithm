import sys
input=lambda:sys.stdin.readline().rstrip()
st=input()
cntA,cntB=0,0
for c in st:
    if c=='A':
        cntA+=1
    elif c=='B':
        cntB+=1
print(f"{cntA} : {cntB}")