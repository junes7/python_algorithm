import sys
input=lambda:sys.stdin.readline().rstrip()
idx=0
while True:
    n0=int(input())
    if n0==0: break
    idx+=1
    n1=3*n0
    n2=(n1 if n1%2==0 else n1+1)//2
    n3=3*n2
    n4=n3//9
    print(f"{idx}. {'odd' if n1%2!=0 else 'even'} {n4}")