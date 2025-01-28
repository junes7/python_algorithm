import sys
t=int(sys.stdin.readline())
for i in range(t):
    n=int(sys.stdin.readline())
    applicants,cnt=[],1
    for i in range(n):
        applicants+=[list(map(int,sys.stdin.readline().split()))]
    applicants.sort(key=lambda x:x[0]);
    cutline=applicants[0][1]
    for i in range(1,n):
        if cutline>applicants[i][1]:
            cutline=applicants[i][1];
            cnt+=1
    print(cnt)