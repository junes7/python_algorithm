import sys
mii=lambda:sys.stdin.readline().rstrip()
c=int(mii())
for i in range(c):
    score=list(map(int,mii().split()))
    n=score[0]
    del score[0]
    avg=sum(score)/n
    cnt=0
    for j in score:
        if j>avg:
            cnt+=1
    print(f'{cnt/n*100:.3f}%')