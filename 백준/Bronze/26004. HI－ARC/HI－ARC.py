import sys
input=lambda:sys.stdin.readline().rstrip()
dic={'H':0,'I':0,'A':0,'R':0,'C':0}
n=int(input())
for c in input():
    if c in dic:
        dic[c]+=1
print(min(dic.values()))