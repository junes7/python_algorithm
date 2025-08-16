import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    input()
    n,m=map(int,input().split())
    sj=sorted([*map(int,input().split())],reverse=True)
    sb=sorted([*map(int,input().split())],reverse=True)
    while sj and sb:
        if sj[-1]>=sb[-1]:
            sb.pop()
        else:
            sj.pop()
    print('S' if sj else 'B' if sb else 'C')