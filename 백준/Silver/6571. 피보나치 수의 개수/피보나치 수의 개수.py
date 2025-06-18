import sys
input=lambda:sys.stdin.readline().rstrip()
dp,t=[1,1],2
while dp[-1]<10**100:
    dp+=[dp[t-1]+dp[t-2]]
    t+=1
while 1:
    a,b=map(int,input().split())
    if a==0 and b==0: break
    st,end=0,0
    for i in range(0,len(dp)):
        if dp[i]>b:
            end=i-1
            break
        if dp[i]<a:
            st=i
    print(end-st)