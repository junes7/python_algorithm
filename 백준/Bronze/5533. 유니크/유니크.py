import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
score=[[],[],[]]
for _ in range(n):
    arr=[*map(int,input().split())]
    for j in range(3):
        score[j].append(arr[j])
for i in range(n):
    total=0
    for j in range(3):
        if score[j].count(score[j][i])==1:
            total+=score[j][i]
    print(total)