import sys
input=lambda:sys.stdin.readline().rstrip()
n,a,b=map(int,input().split())
onion=[1,1]
for i in range(n):
    onion[0]+=a;
    onion[1]+=b;
    if onion[0]<onion[1]:
        onion[0],onion[1]=onion[1],onion[0]
    elif onion[0]==onion[1]:
        onion[1]-=1
print(*onion)