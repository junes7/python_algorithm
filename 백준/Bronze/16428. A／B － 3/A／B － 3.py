import sys
input=lambda:sys.stdin.readline().rstrip()
a,b=map(int,input().split())
print(a//b if b>0 else -(a//-b),a%b if b>0 else a%-b,sep="\n")