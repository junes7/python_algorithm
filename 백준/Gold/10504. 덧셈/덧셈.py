import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    n,x=int(input()),2
    while 1:
        t=n-x*(x+1)//2
        if t<0:
            st=""
            break
        if t%x==0:
            st=str(n)+" = ";
            rem=t//x
            for i in range(1,x):
                st+=str(i+rem)+" + "
            st+=str(x+rem)
            break
        x+=1
    print("IMPOSSIBLE" if len(st)==0 else st)