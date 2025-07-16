import sys
input=lambda:sys.stdin.readline().rstrip()
i=1
while 1:
    n=int(input())
    if n==0: break
    arr=sorted([input() for _ in range(n)])
    print(i,*arr,sep="\n")
    i+=1