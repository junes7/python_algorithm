import sys
input=lambda:sys.stdin.readline().rstrip()
total,diff=map(int,input().split())
if total<diff: print(-1)
else:
    if (total+diff)%2!=0: print(-1)
    else: print((total+diff)//2,(total-diff)//2)