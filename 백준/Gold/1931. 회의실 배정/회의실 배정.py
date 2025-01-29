import sys
n=int(sys.stdin.readline())
time=[list(map(int,sys.stdin.readline().split())) for i in range(n)]
time.sort(key=lambda x:(x[1],x[0]));
start,end,cnt=time[0][0],time[0][1],1
for i in range(1,n):
    if end<=time[i][0]:
        start=time[i][0]
        end=time[i][1]
        cnt+=1
print(cnt)