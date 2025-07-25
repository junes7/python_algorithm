import sys
input=lambda:sys.stdin.readline().rstrip()
team1=sorted([*map(int,input().split())])
team2=sorted([*map(int,input().split())])
rlt=0
for i in range(5):
    if team1[i]>team2[i]:
        rlt+=1
print(rlt)