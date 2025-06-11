import sys
input=lambda:sys.stdin.readline().rstrip()
while 1:
    arr=[*map(int,input().split())]
    if arr[0]==0: break
    n=int(str(arr[1]),arr[0])%int(str(arr[2]),arr[0])
    rlt=[]
    while n>=arr[0]:
        rlt+=[str(n%arr[0])]
        n//=arr[0]
    rlt+=[str(n)]
    print(''.join(rlt[::-1]))