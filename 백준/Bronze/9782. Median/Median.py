import sys
input=lambda:sys.stdin.readline().rstrip()
i=0
while True:
    n,*arr=map(int,input().split())
    if n==0: break
    i+=1
    print("Case "+str(i)+": "+(str(float(arr[(n+1)//2-1])) if n%2!=0 else str((arr[n//2-1]+arr[n//2])/2)))