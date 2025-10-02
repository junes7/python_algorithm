import sys
N=int(sys.stdin.readline())
num=10
while(N>num):
    if(N%num >= num//2):
        N=N+num
    N=N-(N%num)
    num=num*10
print(N)