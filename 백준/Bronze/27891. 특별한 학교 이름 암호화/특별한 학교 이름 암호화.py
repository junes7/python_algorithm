import sys
input=lambda:sys.stdin.readline().rstrip()
name=input()
sname=["branksomeh","koreainter","stjohnsbur","northlondo"]
abbrev=["BHA","KIS","SJA","NLCS"]
for i in range(4):
    t,formatn=ord(name[0])-ord(sname[i][0]),""
    if t>=0:
        for c in sname[i]:
            formatn+=chr(ord(c)+t-26 if ord(c)+t>122 else ord(c)+t)
    else:
        for c in sname[i]:
            formatn+=chr(ord(c)+26+t if ord(c)+t<97 else ord(c)+t)
    if formatn==name:
        print(abbrev[i])
        break