import sys
input=lambda:sys.stdin.readline().rstrip()
cntA,cntB,cntD=0,0,0
A=[*map(int,input().split())]
B=[*map(int,input().split())]
for i in range(10):
    if A[i]==B[i]:
        continue
    else:
        if A[i]>B[i]:
            cntA+=1
        elif A[i]<B[i]:
            cntB+=1
print('D' if cntA==cntB else 'A' if cntA>cntB else 'B')