import sys
input=lambda:sys.stdin.readline().rstrip()
num,seal=int(input()),input()
dic={'B':0,'R':0,'O':0,'N':0,'Z':0,'S':0,'I':0,'L':0,'V':0,'E':0}
for c in seal:
    if c in dic:
        dic[c]+=1
dic['E']//=2
dic['R']//=2
print(min(dic.values()))