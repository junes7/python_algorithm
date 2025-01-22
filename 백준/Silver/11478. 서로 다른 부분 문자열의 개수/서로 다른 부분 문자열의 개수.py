import sys
s=sys.stdin.readline().split()[0]
alpha,d=set(),0
while d<len(s):
    for i in range(len(s)-d):
        alpha.add(s[i:i+1+d])
    d+=1
print(len(alpha))