import sys
input=lambda:sys.stdin.readline().rstrip()
a,b=map(int,input().split())
t=str(a//b)+'.'
if a%b:
    i=0
    while a%b and i<1000:
        a=a%b*10
        i+=1
        t+=str(a//b)
print(t)