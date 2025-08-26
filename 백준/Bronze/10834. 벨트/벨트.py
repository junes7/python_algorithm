import sys
input=lambda:sys.stdin.readline().rstrip()
m=int(sys.stdin.readline())
num1,num2=0,0
for i in range(m):
    a,b,r=map(int, sys.stdin.readline().split())
    if(i==0):
        num2=a*b
    else:
        num2=num2//a*b
    if(r==1):
        num1=1-num1
print(num1, num2)