import sys
n,m=map(int,sys.stdin.readline().split())
hloss=[sys.stdin.readline().split()[0] for i in range(n)]
sloss=[sys.stdin.readline().split()[0] for i in range(m)]
interLoss=list(set(hloss)&set(sloss))
print(len(interLoss))
interLoss.sort()
for loss in interLoss:
    print(loss)