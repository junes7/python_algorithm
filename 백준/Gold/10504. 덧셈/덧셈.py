import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    n=int(input())
    arr,x=[],2
    while 1:
        t=n-x*(x+1)//2
        if t<0:
            break
        if t%x==0:
            rem=t//x
            for i in range(1,x+1):
                arr+=[i+rem]
            break
        x+=1
    if len(arr):
        st=str(n)+" = ";
        for i in range(len(arr)-1):
            st+=str(arr[i])+" + "
        st+=str(arr[len(arr)-1])
        print(st)
    else:
        print("IMPOSSIBLE")