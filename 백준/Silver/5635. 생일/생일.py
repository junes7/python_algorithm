import sys
input=lambda:sys.stdin.readline().rstrip()
date=[]
for _ in range(int(input())):
    name,d,m,y=input().split()
    d,m,y=map(int,(d,m,y))
    date+=[(y,m,d,name)]
date.sort()
print(date[-1][3],date[0][3],sep="\n")