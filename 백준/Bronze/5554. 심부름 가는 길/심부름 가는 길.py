import sys
input=lambda:sys.stdin.readline().rstrip()
s=0
for _ in range(4):
    s+=int(input())
print(s//60,s%60,sep="\n")