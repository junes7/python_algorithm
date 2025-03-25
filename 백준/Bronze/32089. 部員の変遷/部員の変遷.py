import sys
input=lambda:sys.stdin.readline().rstrip()
while True:
    n=int(input())
    if n==0: break
    arr=[*map(int,input().split())]
    st=sum(arr[:3])
    r=[st]
    for i in range(n-3):
        st=st-arr[i]+arr[i+3]
        r+=[st]
    print(max(r))