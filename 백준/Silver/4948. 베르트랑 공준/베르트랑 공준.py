import sys,math
while 1:
    n=int(sys.stdin.readline())
    if n==0:
        break
    else:
        num=[True for i in range(2*n+1)]
        for i in range(2,int(math.sqrt(2*n))+1):
            if num[i]==True:
                for j in range(2*i,2*n+1,i):
                    num[j]=False
        cnt=0
        for i in range(n+1,2*n+1):
            if num[i]==True:
                cnt+=1
        print(cnt)