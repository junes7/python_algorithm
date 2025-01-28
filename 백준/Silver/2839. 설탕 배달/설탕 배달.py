import sys
n=int(sys.stdin.readline())
bags,cnt=[5,3],0
if n>bags[0]:
    while n%bags[0]>0:
        n-=bags[1]
        cnt+=1
if n>0:
    for i in range(len(bags)):
        cnt+=n//bags[i]
        n%=bags[i]
print(-1 if n!=0 else cnt)